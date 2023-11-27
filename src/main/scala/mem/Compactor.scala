package vector.mem

import chisel3._
import chisel3.util._
import org.chipsalliance.cde.config._
import freechips.rocketchip.rocket._
import freechips.rocketchip.util._
import freechips.rocketchip.tile._
import vector.common._

class CompactorReq(n: Int) extends Bundle {
  val head  = UInt(log2Ceil(n).W)
  val tail  = UInt(log2Ceil(n).W)
  def count = Mux(tail === 0.U, n.U, tail) - head
}

class Compactor[T <: Data](pushN: Int, popN: Int, gen: => T, forward: Boolean) extends Module {
  require (pushN >= popN)
  val io = IO(new Bundle {
    val push = Flipped(Decoupled(new CompactorReq(pushN)))
    val push_data = Input(Vec(pushN, gen))

    val pop = Flipped(Decoupled(new CompactorReq(popN)))
    val pop_data = Output(Vec(popN, gen))
  })

  def wshr(in: Seq[T], shamt: UInt): Seq[T] =
    (0 until in.size).map { i => VecInit(in.drop(i))(shamt) }
  def wshl(in: Seq[T], shamt: UInt): Seq[T] =
    wshr(in.reverse, shamt).reverse

  val count = RegInit(0.U((1+log2Ceil(pushN)).W))
  val regs = Seq.fill(pushN) { Reg(gen) }
  val valid = (1.U << count) - 1.U

  val may_forward = io.pop.bits.count > count

  io.push.ready := pushN.U +& Mux(io.pop.valid && forward.B, io.pop.bits.count, 0.U) >= count +& io.push.bits.count
  io.pop.ready := count +& Mux(io.push.valid && forward.B, io.push.bits.count, 0.U) >= io.pop.bits.count

  val regs_shr = wshr(regs, io.pop.bits.count)
  val valid_shr = valid >> io.pop.bits.count

  when (io.push.fire || io.pop.fire) {
    count := count +& Mux(io.push.fire, io.push.bits.count, 0.U) - Mux(io.pop.fire, io.pop.bits.count, 0.U)
  }

  val push_elems = io.push_data
  val push_shr     = wshr((Seq.fill(pushN)(0.U.asTypeOf(gen)) ++ push_elems), pushN.U +& io.push.bits.head - count)
  val push_shr_pop = wshr((Seq.fill(pushN)(0.U.asTypeOf(gen)) ++ push_elems), pushN.U +& io.push.bits.head +& io.pop.bits.count - count)

  when (io.pop.fire) {
    for (i <- 0 until pushN) regs(i) := Mux(valid_shr(i), regs_shr(i), push_shr_pop(i))
  } .elsewhen (io.push.fire) {
    for (i <- 0 until pushN) when (!valid(i)) {
      regs(i) := push_shr(i)
    }
  }

  val out_data = if (forward) {
    (0 until popN).map { i => Mux(valid(i), regs(i), push_shr(i)) }
  } else { regs }
  io.pop_data := VecInit(wshl(out_data, io.pop.bits.head).take(popN))
}