#define M_DIM 32
#define K_DIM 32
#define N_DIM 32

typedef float data_t;


static data_t a_matrix [M_DIM*K_DIM] = {
  40.0, 32.0, -13.0, -1.3125, -320.0, -248.0, -1.0, -24.0, -1.375, -88.0,
  17.0, -224.0, -0.71875, 2.0, -72.0, -432.0, -3.75, 1.0, -168.0, 2.5,
  -2.75, 480.0, 26.0, 1.75, 40.0, -1.75, -96.0, 3.0, 4.75, -0.21875,
  240.0, -18.0, 2.875, 13.0, 32.0, 0.375, -1.0, -480.0, -1.875, 4.75,
  1.3125, -2.0, 0.5, 88.0, 0.75, -48.0, 40.0, 0.78125, 0.0, 0.375,
  -62.0, -0.25, 4.5, 0.03125, 0.71875, 0.0, -384.0, -384.0, 12.0, -0.09375,
  -1.3125, 16.0, -11.5, -14.0, 0.75, 1.0625, 1.9375, -62.0, -40.0, -6.0,
  100.0, 0.4375, 3.375, -2.125, -0.1875, -1.5, -4.5, 22.0, 1.75, 6.75,
  -40.0, -7.0, 0.46875, 0.4375, -64.0, -176.0, -100.0, -232.0, 0.09375, 7.0,
  1.5, 1.0, 104.0, 0.75, 14.0, -304.0, 5.5, -0.375, 64.0, -60.0,
  0.46875, -136.0, -11.0, -288.0, -3.75, 368.0, -0.3125, 1.75, -2.875, -1.25,
  -240.0, -72.0, -0.71875, 12.0, -0.40625, -304.0, -0.9375, -1.0, 5.0, 160.0,
  -0.5, 38.0, -3.0, 0.0625, -432.0, 48.0, 16.0, 1.3125, 128.0, 192.0,
  14.0, 116.0, -3.75, 60.0, -72.0, 5.25, 0.90625, -0.875, -0.6875, 1.0625,
  -160.0, 13.0, 336.0, 72.0, 3.0, -10.0, 0.25, 1.875, -176.0, -104.0,
  -2.625, 112.0, -22.0, 8.0, -20.0, -2.5, -128.0, -272.0, -14.5, -0.84375,
  0.75, -0.625, -3.25, 0.3125, -136.0, 1.25, -9.0, -26.0, -48.0, -14.0,
  -3.25, 40.0, -108.0, -22.0, 68.0, -0.84375, 0.0625, 15.0, 176.0, 0.75,
  -320.0, -12.0, 0.5, -5.0, 64.0, -5.0, -44.0, -100.0, -208.0, -3.75,
  15.5, -6.5, -0.21875, 464.0, -52.0, -25.0, 1.75, 8.5, 4.0, -22.0,
  -6.0, 1.0, 5.0, -32.0, -24.0, -128.0, -160.0, 2.75, -1.5, 1.5,
  -1.375, -0.15625, 224.0, -0.03125, -0.625, 112.0, -4.0, -11.5, 3.25, 112.0,
  22.0, -4.0, 42.0, 20.0, -0.375, 4.0, 14.5, -60.0, -128.0, -32.0,
  -1.75, -31.0, -168.0, 5.5, 3.25, 42.0, 3.125, 3.125, -38.0, -200.0,
  28.0, 288.0, -40.0, 6.0, -1.0, -40.0, 0.1875, -0.75, -108.0, 1.25,
  -62.0, -216.0, -3.25, -22.0, 108.0, -14.0, 3.25, -40.0, 5.5, -0.09375,
  76.0, -496.0, 0.25, -72.0, -8.0, -0.625, -136.0, -5.75, -42.0, 5.5,
  -27.0, -208.0, -464.0, 15.5, 19.0, 25.0, -2.0, -3.75, -16.0, 16.0,
  14.5, -3.5, -2.0, 96.0, 32.0, -9.0, 144.0, 1.875, 32.0, 17.0,
  -34.0, -15.0, 20.0, -304.0, -320.0, -6.0, -44.0, -14.5, -1.25, -0.59375,
  7.0, -42.0, 62.0, -1.0, -28.0, -96.0, 192.0, -320.0, 0.875, -1.25,
  -0.03125, 8.0, -56.0, -0.625, -304.0, 9.0, -32.0, 5.75, -4.5, -304.0,
  -240.0, 2.0, 96.0, -3.375, -9.0, 34.0, -4.75, 480.0, -1.5, 3.0,
  -256.0, 28.0, 0.5, -1.0, 14.0, -416.0, 1.75, 72.0, -192.0, 8.0,
  0.9375, 13.0, 3.125, 1.25, -48.0, -1.375, -3.875, -160.0, -9.5, 9.5,
  -20.0, 2.0, -192.0, 52.0, -0.59375, 0.6875, -256.0, 28.0, -120.0, 9.0,
  1.5, 40.0, -432.0, 176.0, -2.0, 4.0, 12.0, 0.25, -21.0, -36.0,
  40.0, 1.25, 0.875, -224.0, 10.0, -136.0, 0.5, -0.625, -0.875, 3.375,
  -8.0, -1.0, -144.0, -80.0, 1.5, -1.0625, -144.0, 0.15625, -14.5, 1.5,
  -15.0, 84.0, -1.0, 104.0, -104.0, 88.0, -3.25, -64.0, -36.0, -2.0,
  1.0, -16.0, 84.0, 96.0, -6.25, 2.25, -20.0, -16.0, 0.25, -0.53125,
  3.625, -56.0, 1.25, 30.0, -2.5, 5.0, 152.0, 104.0, -0.75, 160.0,
  0.0625, 304.0, 224.0, -32.0, 432.0, -12.0, 0.25, -4.0, -25.0, 28.0,
  -1.0, -0.25, -0.53125, 400.0, -16.0, -124.0, 72.0, 34.0, -0.6875, -6.0,
  -4.0, 6.5, -208.0, 0.5, 0.0, 8.0, 14.5, -160.0, 0.625, -480.0,
  -160.0, 0.21875, -12.0, -7.75, 4.0, -0.5625, -368.0, -5.25, 15.0, -0.125,
  -56.0, 48.0, -208.0, -8.0, 0.0, 1.0, 4.0, -17.0, -0.5, -208.0,
  160.0, 128.0, 9.0, 232.0, -2.0, -3.375, -1.75, -22.0, -112.0, -13.5,
  -0.625, -14.0, 0.125, 12.0, -0.875, 22.0, -7.0, 224.0, 0.0625, -16.0,
  16.0, -4.0, -88.0, 1.5, -1.5, 11.5, 46.0, 7.5, -32.0, -4.0,
  1.9375, -13.5, 1.0625, -16.0, -4.5, 18.0, -2.0, 13.0, -15.5, 1.625,
  -1.125, 1.875, 1.4375, 0.03125, -16.0, -0.46875, -1.9375, -136.0, -80.0, -112.0,
  -64.0, 2.25, 0.5, -0.25, -0.8125, -24.0, 36.0, 1.0, -1.3125, -160.0,
  -17.0, -24.0, 4.0, 5.0, -5.0, -1.8125, 92.0, -0.75, 120.0, -160.0,
  11.5, 0.0, 38.0, -80.0, 8.0, -0.5625, -0.03125, -72.0, 9.0, 0.96875,
  1.9375, -8.0, 7.5, 1.375, 44.0, 23.0, -7.75, -432.0, -176.0, 0.9375,
  8.0, 1.75, 0.625, 56.0, 10.0, -24.0, -4.75, -1.625, 0.125, -56.0,
  100.0, -4.5, 0.9375, 0.75, 24.0, 12.0, -36.0, -2.75, -38.0, 0.0,
  48.0, 31.0, 0.59375, -68.0, 448.0, 160.0, 7.5, 0.5625, -5.0, -18.0,
  1.0, -0.875, -104.0, 31.0, -0.34375, -120.0, -4.0, 0.0, 1.625, 54.0,
  0.0, 6.75, 4.0, -2.375, -16.0, 1.4375, -9.0, 0.375, 136.0, 88.0,
  38.0, 20.0, -3.0, 1.75, -5.0, -28.0, 248.0, 0.9375, -80.0, 240.0,
  0.0, 11.0, 48.0, 9.0, 0.0625, -2.125, 10.0, -96.0, -1.75, 0.875,
  1.1875, -432.0, 8.0, -12.0, -9.0, 0.34375, -4.0, 11.0, 0.28125, 96.0,
  -3.0, 0.5, 4.25, -6.0, -40.0, 2.75, -1.0625, -8.0, 9.5, -68.0,
  23.0, -22.0, 176.0, -8.0, 16.0, -4.0, -16.0, -168.0, -0.4375, -0.0625,
  1.75, 23.0, 3.75, 368.0, 24.0, 128.0, 2.5, -58.0, 0.25, 5.5,
  -144.0, -5.75, -1.0, -76.0, 3.75, 7.0, 104.0, -0.34375, 9.0, -0.28125,
  0.0, 3.0, -3.75, 336.0, -7.25, 0.875, 0.5625, 0.625, 5.5, -0.9375,
  1.0, 8.0, -2.5, 7.25, -120.0, 4.75, 5.5, 5.0, -432.0, -42.0,
  -2.375, -0.375, -0.4375, 5.25, -240.0, 8.5, -0.375, -1.5, 0.96875, -368.0,
  -1.375, -1.25, -128.0, -96.0, 50.0, -64.0, 2.625, 1.625, 0.4375, 56.0,
  10.5, 2.0, 2.5, 0.9375, 368.0, -3.0, -160.0, 400.0, -0.3125, 68.0,
  -192.0, -44.0, 104.0, 1.25, 2.375, 38.0, 0.0, -0.84375, -104.0, 7.25,
  1.75, -31.0, -17.0, 32.0, 14.5, -200.0, -8.0, -64.0, 72.0, -56.0,
  56.0, -1.5, -20.0, -1.5, 0.75, 0.34375, 8.0, 96.0, -4.5, 10.5,
  1.75, -8.5, 0.28125, -256.0, 80.0, 144.0, -0.5, -10.5, 28.0, 12.0,
  1.875, -52.0, -1.9375, -0.75, 1.5625, -40.0, 0.0, -2.0, 1.25, -5.25,
  -5.0, -96.0, 4.0, 3.5, 84.0, -0.25, 0.625, -6.0, -58.0, -112.0,
  -25.0, -16.0, -432.0, 48.0, 1.125, 0.28125, -100.0, -64.0, 12.5, -0.03125,
  -12.0, 80.0, 28.0, -40.0, 32.0, 3.5, -32.0, 3.25, 23.0, -22.0,
  -4.0, -368.0, -2.0, 1.8125, 0.0625, 11.0, -92.0, 192.0, -15.0, 0.0,
  -11.0, 0.75, 6.25, -0.5, -80.0, -400.0, 216.0, -128.0, -3.375, -0.5,
  -1.625, -8.0, -2.75, -1.75, 0.09375, 2.5, 2.0, -0.8125, 3.125, -5.75,
  -1.0, -13.0, -1.8125, -40.0, -0.1875, 3.0, 0.59375, -7.25, 68.0, -0.15625,
  -2.25, 3.25, -76.0, 336.0, 5.0, 152.0, -384.0, 32.0, -0.75, -1.75,
  0.15625, 52.0, 1.0, 22.0, 28.0, -256.0, -3.5, 16.0, 14.0, -1.25,
  2.5, -0.625, 64.0, 32.0, -1.9375, 16.0, -0.8125, 0.5, -2.125, 144.0,
  1.0, -240.0, -0.9375, 50.0, 160.0, -4.0, -1.25, 28.0, -0.8125, -76.0,
  1.75, 2.5, 0.0, -64.0, 400.0, 54.0, 1.625, 40.0, -224.0, -17.0,
  -96.0, -20.0, 124.0, 36.0, 27.0, 272.0, -0.71875, -1.0, 68.0, -7.0,
  20.0, -248.0, 432.0, -2.0, 5.5, 0.9375, -12.0, -0.28125, 4.5, -32.0,
  0.375, -0.25, 10.0, 72.0, -5.5, -26.0, -21.0, 26.0, -5.5, -9.0,
  -3.0, 64.0, 96.0, -4.0, -7.25, -64.0, 28.0, -9.0, -13.0, 11.0,
  -1.0, -0.09375, 7.5, 0.625, -3.875, -10.5, 0.28125, -24.0, 480.0, -512.0,
  -104.0, -248.0, 116.0, -1.75, -352.0, 7.0, 18.0, 54.0, 17.0, -128.0,
  -184.0, -16.0, 224.0, 0.1875, 2.625, -48.0, 14.0, 2.0, 7.0, -2.375,
  -58.0, -24.0, -0.125, -104.0, -64.0, 0.0, -176.0, -0.59375, 1.5, 0.0,
  -0.375, 1.625, 0.375, -0.6875, -16.0, 112.0, -36.0, 1.125, 64.0, 3.0,
  -6.5, 480.0, 6.0, -11.0, 3.25, -2.625, 1.625, -4.0, 0.25, -7.0,
  -0.625, 36.0, -216.0, -15.0, 36.0, -116.0, -7.25, -40.0, 12.0, 12.0,
  1.6875, -9.5, 0.25, 0.75, 2.5, -9.0, 1.75, -44.0, -1.875, 96.0,
  -68.0, 4.0, 112.0, 16.0,
};
static data_t b_matrix [K_DIM*N_DIM] = {
  -13.5, -3.75, -0.03125, 0.5, -0.9375, -208.0, 128.0, 1.75, -104.0, -8.0,
  -20.0, 0.125, 1.6875, -30.0, 9.0, 0.90625, -108.0, 58.0, -1.0, 3.5,
  -3.0, -64.0, 20.0, 7.5, -248.0, 5.0, 0.78125, -1.9375, 200.0, 5.25,
  15.0, 7.5, 200.0, 0.125, -13.0, 72.0, -2.75, 160.0, -40.0, 1.75,
  -64.0, 3.5, -16.0, 6.25, 88.0, 22.0, -0.0625, 0.125, 288.0, -20.0,
  20.0, -24.0, 432.0, -5.5, -56.0, -224.0, -7.5, 0.1875, -22.0, 6.0,
  8.0, -0.34375, -1.5, -352.0, 1.8125, 0.5625, 2.75, -152.0, 112.0, -5.5,
  -36.0, -64.0, 1.25, -224.0, -1.375, -0.625, -3.5, 1.0, -0.25, -304.0,
  -0.71875, 256.0, -168.0, 1.1875, 144.0, -9.5, -120.0, -0.75, 0.5, -4.0,
  12.0, 3.25, 1.0, -0.90625, 0.34375, -1.0, -128.0, -1.5, 32.0, -17.0,
  -0.5, 184.0, -44.0, -42.0, -2.0, 24.0, 8.5, -0.40625, -0.03125, -24.0,
  -5.75, 28.0, -5.25, -12.0, 12.0, -9.0, -0.75, 2.625, -7.0, -11.0,
  31.0, -20.0, 4.0, -19.0, 23.0, 11.0, -184.0, -5.5, -62.0, -6.0,
  0.9375, -5.0, -0.6875, 84.0, -16.0, -0.125, 15.0, 64.0, -3.0, 0.5,
  -0.65625, -2.75, 1.375, -13.5, -72.0, 6.25, -40.0, 1.6875, -2.0, -25.0,
  -1.125, 1.75, -2.0, 6.5, -25.0, 24.0, -3.875, 8.5, 1.875, 0.125,
  -116.0, 44.0, -15.0, -92.0, 112.0, 6.0, 12.0, 0.40625, 1.25, 1.4375,
  -22.0, -176.0, 42.0, -144.0, 60.0, -6.5, 48.0, 44.0, -192.0, 0.8125,
  -0.34375, 1.8125, -120.0, -19.0, 1.125, 6.0, 9.5, -192.0, 12.0, -32.0,
  76.0, 8.0, 1.0, -3.375, -8.0, -4.0, -1.0, 2.0, -448.0, 0.0,
  1.5, -40.0, 12.5, -0.9375, -1.5, -0.59375, -7.5, 0.28125, 128.0, 24.0,
  -0.6875, -3.125, -7.5, 11.5, 1.125, -336.0, 84.0, 192.0, -24.0, 1.75,
  -4.0, -22.0, 24.0, 0.125, -100.0, 0.3125, -3.0, 0.71875, -2.875, -21.0,
  -0.28125, -0.71875, -0.375, -0.3125, 0.21875, -3.875, -432.0, 0.0, 216.0, 6.75,
  108.0, 0.8125, -54.0, -6.0, -1.3125, -0.03125, -512.0, -9.5, -24.0, 0.8125,
  22.0, 0.4375, -0.5625, 14.0, 8.0, -1.875, 40.0, -80.0, -432.0, 248.0,
  -1.25, 3.0, 184.0, -0.375, -15.0, 1.25, 1.3125, 208.0, -1.3125, 62.0,
  -2.0, -0.5, 1.8125, -22.0, 1.5, 1.5, 0.8125, 0.03125, 1.5, -20.0,
  96.0, -2.5, 24.0, 0.90625, 32.0, 96.0, -14.0, -1.0, 3.25, 0.25,
  108.0, -2.0, 2.5, 128.0, 12.0, 7.0, -4.0, -48.0, 15.0, 0.0,
  5.25, 1.0, -56.0, -0.5, 10.0, 16.0, -352.0, 80.0, 5.0, 3.25,
  108.0, -9.0, -22.0, -0.3125, -64.0, -0.96875, -2.0, 0.5, 1.8125, -0.5,
  -432.0, 0.0, -3.5, -4.25, -84.0, 2.375, 6.0, 48.0, 9.5, -29.0,
  2.0, -2.625, -224.0, 5.0, 1.5, 1.0, -1.75, 0.15625, -1.375, -0.25,
  9.5, -26.0, 384.0, 42.0, 1.375, 1.0, 4.0, 0.625, 128.0, -0.625,
  31.0, -5.0, -30.0, 1.0, 96.0, 18.0, -1.25, 22.0, 0.53125, 22.0,
  54.0, 8.0, -0.25, 0.40625, -96.0, -0.71875, 0.875, 0.25, 288.0, -0.125,
  -1.75, 0.125, 248.0, -13.0, 176.0, 16.0, 56.0, -1.9375, -416.0, -2.375,
  -31.0, -0.5, -0.5, -0.25, -0.875, -7.25, -19.0, 0.75, -64.0, -0.5,
  31.0, 0.46875, 10.0, -7.25, 8.5, -192.0, 34.0, -10.0, -2.625, -36.0,
  20.0, -32.0, -7.5, 7.75, -0.34375, -0.625, 26.0, 1.25, -120.0, 80.0,
  3.5, 8.0, -0.8125, -6.0, 12.0, -112.0, -0.03125, -272.0, 72.0, -0.125,
  -2.0, -1.5, 22.0, -112.0, 2.0, 24.0, 72.0, -1.875, -0.1875, 0.0,
  -6.75, -3.0, -3.625, 7.0, -0.71875, 336.0, -0.1875, -2.0, -14.5, 496.0,
  5.25, -352.0, 13.0, -36.0, -448.0, 2.5, -14.0, 1.3125, 0.1875, 72.0,
  -3.0, -40.0, -0.75, -0.65625, 304.0, 304.0, 2.0, -72.0, 96.0, -4.75,
  -0.5, -1.5, 18.0, 2.0, 100.0, 7.5, 7.0, -56.0, -1.75, 0.0,
  2.75, 240.0, -21.0, -248.0, 3.25, 25.0, -14.0, 52.0, -32.0, 0.0,
  368.0, 10.5, -2.75, -216.0, -0.21875, 6.0, -8.0, -13.5, 0.46875, 60.0,
  -1.5, -1.0, 2.0, -5.5, 0.84375, -2.25, -13.0, -62.0, -16.0, 0.8125,
  20.0, -8.0, 0.53125, -31.0, 2.75, 0.875, 8.0, 3.625, 4.75, 48.0,
  -7.0, 0.875, 3.0, -3.125, 1.25, -4.0, -2.375, 1.25, 0.21875, -29.0,
  -12.0, 29.0, 8.0, -224.0, 19.0, 18.0, 54.0, 0.0, -17.0, -36.0,
  -68.0, 5.5, -14.0, -30.0, -144.0, -40.0, 2.625, 31.0, -96.0, -13.5,
  -46.0, -1.0, -0.875, 10.0, -5.0, 1.0625, -1.125, -368.0, -1.625, -17.0,
  6.0, -9.5, 176.0, -96.0, -5.5, 3.25, -3.0, -2.125, 0.34375, 0.375,
  -48.0, 208.0, 11.0, 29.0, -96.0, -0.75, 0.0, 8.0, -32.0, 120.0,
  -0.84375, 88.0, 0.375, -108.0, 6.0, 8.0, 52.0, -184.0, -30.0, 88.0,
  -32.0, -0.375, 496.0, 31.0, -240.0, -2.0, -0.59375, 0.6875, 0.3125, -14.0,
  -8.0, -3.0, -4.0, -0.25, -0.53125, -6.0, -18.0, -0.9375, -2.75, 2.5,
  -2.875, 128.0, 0.5, 20.0, -56.0, 216.0, 40.0, -184.0, -72.0, 9.0,
  -16.0, -32.0, -32.0, -8.0, -80.0, 24.0, 54.0, 116.0, -0.40625, 48.0,
  13.0, -3.375, 2.875, -10.0, 288.0, -5.75, -0.3125, 0.3125, 0.0, 20.0,
  160.0, 1.0, -512.0, -1.75, -0.375, -5.0, -60.0, -8.5, 3.0, -168.0,
  -2.875, -124.0, -216.0, 0.6875, -64.0, -464.0, -100.0, -7.0, -2.25, -3.375,
  -224.0, 56.0, -240.0, 240.0, -128.0, 25.0, -44.0, -18.0, 1.0625, -46.0,
  -23.0, -14.0, 4.0, -384.0, 14.5, -23.0, 26.0, -4.0, 0.09375, -2.25,
  -368.0, 0.6875, -176.0, -1.0, 144.0, -1.125, 136.0, 36.0, -512.0, -30.0,
  16.0, 0.4375, -31.0, 6.0, 2.75, -0.0625, -240.0, -1.125, 16.0, -6.5,
  -224.0, -13.0, 3.125, -5.0, 0.0, 0.125, 0.25, -256.0, -224.0, 144.0,
  13.5, -16.0, 68.0, -0.75, 208.0, 60.0, -496.0, 16.0, 208.0, 1.9375,
  -128.0, -64.0, -56.0, -0.8125, -92.0, 0.8125, 5.0, -20.0, -72.0, -1.75,
  -15.0, 48.0, 496.0, -0.375, -200.0, 64.0, -1.0, -0.5, -4.75, 208.0,
  4.25, -0.8125, 116.0, 0.125, -0.875, 0.34375, -32.0, -1.0, -1.0, 26.0,
  -13.0, 8.0, -200.0, 46.0, 400.0, 48.0, 0.75, -16.0, 32.0, -30.0,
  -14.5, -256.0, 2.0, -0.5, 12.0, -1.25, -240.0, 3.125, 112.0, -36.0,
  -384.0, 1.625, -22.0, 3.125, -64.0, -30.0, 0.875, 76.0, 48.0, 0.0,
  0.0, 10.0, 1.0, 32.0, -1.1875, 136.0, -1.75, -0.5625, -96.0, -14.5,
  -17.0, -1.5, -1.5, 13.0, 5.0, -11.5, -16.0, 464.0, 272.0, -10.0,
  40.0, 0.53125, 5.25, -15.0, 12.0, 2.25, -124.0, -0.5625, -0.75, -5.0,
  2.375, 5.5, -2.0, -120.0, 116.0, -1.875, -15.0, 1.0, -22.0, -0.90625,
  58.0, 40.0, 1.375, 0.53125, 0.96875, -0.3125, 0.0, 1.75, -72.0, -10.0,
  -20.0, -8.0, -0.5, -3.0, -256.0, -0.875, 112.0, -0.34375, -128.0, -72.0,
  0.875, -24.0, -1.5, -128.0, -62.0, -208.0, 21.0, -10.0, -128.0, -128.0,
  84.0, 48.0, 12.0, 24.0, 16.0, -6.75, -1.3125, 17.0, -40.0, -0.46875,
  -0.21875, -16.0, -10.0, -16.0, 0.875, 104.0, -2.5, 0.53125, -2.0, -6.25,
  8.0, 76.0, 136.0, 3.625, 2.75, -32.0, -1.5, 4.0, 52.0, 0.28125,
  184.0, 176.0, -31.0, 0.75, -96.0, 432.0, -4.0, -4.0, -0.96875, 0.96875,
  0.03125, 14.0, -16.0, -384.0, -0.03125, -24.0, -60.0, 4.0, -1.875, -0.625,
  -56.0, -25.0, 464.0, -2.25, -28.0, 50.0, -0.4375, 10.0, -216.0, 120.0,
  -2.0, -2.0, 0.5, -512.0, 48.0, -0.625, -4.0, -0.5, -62.0, -7.0,
  -1.4375, -3.0, -56.0, 15.5, -0.75, -56.0, -26.0, -2.875, 1.0, -3.0,
  -0.71875, -13.0, -160.0, -15.0, -1.5625, 464.0, -368.0, -2.5, -1.5625, 0.0,
  -480.0, -80.0, -30.0, 400.0, 16.0, -23.0, -9.0, 20.0, 24.0, -2.0,
  -0.84375, 21.0, 44.0, 0.75, 4.0, -200.0, -1.25, -2.5, -216.0, 1.0,
  -0.125, -16.0, 3.5, -40.0, 2.625, -5.25, 0.40625, -0.5625, 10.0, -0.3125,
  192.0, 26.0, 0.25, -448.0, 22.0, 22.0, 7.25, -0.6875, 0.375, -0.5625,
  1.0, -104.0, 16.0, -2.375, -400.0, -104.0, 6.0, 0.6875, -432.0, 28.0,
  4.0, -1.0, 7.0, -0.5, 168.0, -0.9375, 112.0, 20.0, 28.0, 62.0,
  -3.875, 96.0, -0.25, -480.0, -0.6875, -19.0, 30.0, 272.0, -416.0, -0.9375,
  8.0, 2.125, -13.0, 208.0, -15.0, 32.0, 20.0, -4.5, 1.5, -0.3125,
  -0.5625, -60.0, 6.0, 4.25, 1.25, 400.0, -4.5, 124.0, -23.0, -22.0,
  -40.0, 80.0, -0.59375, -8.0,
};
static data_t verify_data [M_DIM*N_DIM] = {
  -142843.984375, 39934.1484375, 41005.96875, 19349.1328125, 48615.96875, -28766.328125, -323411.96875, -25372.0390625, 16357.96875, -40965.859375,
  -23788.1484375, 17485.15625, 23132.5625, 39081.6953125, -228950.953125, -16046.0546875, -39693.1640625, 8805.34375, -96230.1640625, 17434.8828125,
  -40174.10546875, 10935.0546875, 4666.96484375, -23570.9609375, 20084.9140625, -128368.6875, 19086.62890625, 108826.78125, 35942.00390625, -55138.65625,
  -1998.3125, 39857.3359375, 30654.16015625, 8477.4765625, 4375.54296875, 78544.84375, -94340.6484375, -11370.3212890625, -15466.6171875, -38608.4140625,
  27715.8046875, -9539.6953125, 24838.72265625, 73494.484375, -24541.671875, 71442.984375, -21442.203125, -9423.4541015625, 7815.0947265625, -12691.953125,
  126817.2265625, -192955.734375, -67442.921875, 4230.306640625, 51840.3671875, -11557.26171875, 97128.6796875, -595.5859375, -89482.296875, 92824.5703125,
  113935.84375, 30402.98828125, -39028.72265625, 13028.5166015625, 34546.63671875, 143221.265625, 12602.3359375, 6531.798828125, -45945.609375, -75833.828125,
  242270.84375, -49876.546875, -88810.0234375, -19545.220703125, 35039.65625, -53564.703125, 4133.318359375, -14968.2578125, 46341.66796875, 56151.671875,
  11382.677734375, 2117.599609375, -14574.39453125, 24754.90625, 72923.46875, -4018.12890625, -20725.359375, -109365.453125, 97606.9453125, -4164.84375,
  38408.34375, -19627.87890625, 3316.21484375, 33011.0546875, -13705.2265625, -14324.2421875, 47932.75, -29547.76953125, 116334.15625, -30162.84765625,
  6901.884765625, 64144.40625, -72246.8828125, 149443.796875, 24978.984375, -47863.28125, -10402.3994140625, 9237.673828125, 148549.53125, 21782.671875,
  -101695.28125, -60945.796875, -121690.40625, 7911.384765625, -104359.96875, 68629.7890625, -29608.294921875, -3931.455078125, 164811.734375, -54423.5546875,
  86689.9140625, 64661.796875, 39545.125, 30165.234375, 5902.994140625, -222143.71875, 165691.96875, 65038.8046875, 52822.3359375, 47826.734375,
  186935.84375, -1908.5234375, 21127.6484375, -5304.421875, 179711.875, 175109.5, 9742.84375, -15427.57421875, 64445.6328125, 7994.806640625,
  65659.1015625, -60323.71875, 52509.9296875, -26874.40625, 79063.9375, 64012.4765625, 23204.232421875, -13130.09375, 120521.390625, -6439.2373046875,
  -13443.2890625, 129917.8125, -74712.3359375, -73833.21875, 34863.359375, -17709.41796875, 11631.390625, -38886.8671875, 69329.1484375, -42015.19921875,
  26977.71875, 34031.6953125, 134819.15625, -24605.0625, 14478.26953125, 135544.765625, 130592.453125, 134948.4375, -51822.83203125, -14326.984375,
  79297.6484375, -55641.1875, 92995.046875, -79325.765625, 33247.6875, -1433.28125, 48115.6640625, 7227.4296875, 10269.453125, 82335.734375,
  37323.9609375, 10370.8359375, 21851.58203125, 126808.28125, 9905.78125, 15641.11328125, 21274.5546875, 8829.92578125, -56177.46875, -63308.19921875,
  194022.65625, -23883.11328125, 100303.140625, -15661.5234375, -67075.9765625, 31901.11328125, -14257.724609375, -28072.5078125, -103692.890625, -18469.7734375,
  11216.4765625, 25570.759765625, -93917.59375, 64792.86328125, 579.78125, 59907.546875, -53197.95703125, -11615.4140625, 96143.25, -24181.921875,
  -1673.587890625, -101457.078125, 153131.390625, -6969.2734375, -5040.8828125, -288295.25, -30248.2109375, 81688.6875, -3991.7216796875, -1162.333984375,
  111425.421875, 951.4765625, -82078.734375, -141851.1875, -41387.34765625, 39389.875, 87198.015625, -139264.515625, -16645.7734375, -39748.07421875,
  -59548.84375, -52536.78515625, 63582.5, -51990.34765625, 27549.46875, -142072.515625, 11359.375, -2269.484375, -41569.4140625, -17478.17578125,
  5939.0, 79707.5703125, -20678.38671875, 50868.7734375, -40283.59765625, 10194.515625, 33382.65625, -7399.75, -9007.4296875, 49899.09375,
  8529.06640625, 28803.25390625, -93043.8046875, -68204.3046875, 9155.4140625, 7196.822265625, 57238.859375, -29202.734375, 17091.046875, 24518.25,
  -36752.5625, -3603.09375, 11013.6015625, 5963.8046875, 11656.0625, -15020.140625, -4123.234375, 225726.0625, 27881.95703125, 60212.921875,
  -127099.6796875, -17441.796875, -37430.8359375, 17847.9453125, 59267.6640625, -26028.9375, -13422.9921875, 13290.62890625, 111699.65625, 36019.640625,
  8593.09375, -14056.2890625, 42865.2109375, 102223.640625, 36538.3125, 29797.515625, -53914.91796875, 23030.890625, 67903.140625, 152574.09375,
  42677.5, 151725.3125, -49277.5390625, -84631.578125, 440922.5, 75997.375, -110667.5625, -27987.001953125, 9558.2109375, -31467.890625,
  -9291.4609375, 31534.984375, -21883.0, 8163.2890625, -124658.875, -45022.80859375, 73623.1875, -27037.0625, -5772.34375, -8137.09375,
  -8499.40625, -48267.015625, 122522.5546875, -86236.1171875, 17225.7109375, 67397.609375, 50153.76171875, 7548.84375, -52100.00390625, 10846.6298828125,
  -109716.8671875, 39293.9375, 7433.625, 36567.39453125, 33794.71875, 37551.6328125, -158281.625, -44984.828125, 87515.265625, -44194.20703125,
  24247.15625, -73176.640625, -151281.234375, 7203.05859375, 109858.0078125, -24188.8125, 95389.25, 49496.53515625, -30489.046875, 37364.046875,
  -8240.421875, 29094.125, -350227.125, -1197.8125, 37847.734375, -23407.94921875, 202.34375, 829.35546875, -141275.859375, -69833.625,
  -1128.5, 22648.734375, 226507.453125, 31866.759765625, -14204.6328125, 86793.1328125, 6332.8515625, 316.88671875, 226451.78125, -6482.59375,
  -57517.59375, -2267.94921875, 9002.21484375, 2469.841796875, 75861.5703125, 2523.88671875, 109295.6484375, 53288.65234375, 91823.890625, -19611.05859375,
  108859.609375, 3787.451171875, 96548.71875, 27871.4609375, -158590.515625, -11487.9765625, 74834.0, 18855.81640625, -26899.09375, -47497.23046875,
  -92672.359375, 813.0703125, -29089.5, -48480.6640625, 26479.94140625, -995.3515625, 8257.421875, 32636.453125, -19611.53125, 27990.49609375,
  27151.390625, -2994.1484375, -18561.5, 44125.16796875, 2445.328125, -18078.953125, -18174.5, -1909.1728515625, 16316.3798828125, 47659.640625,
  59598.8671875, -47469.78515625, -25805.74609375, 8624.21875, 1774.828125, 5419.75390625, -21746.53125, -34861.8984375, -43306.0859375, 32089.41015625,
  -41718.453125, 1024.9326171875, -24832.8046875, 20102.005859375, 7216.84765625, -34894.265625, -13494.703125, 66813.984375, -187444.71875, -23214.25,
  29751.5234375, -59037.41796875, 64949.6328125, 7270.0859375, 17703.0703125, -66824.390625, -23905.90625, 2146.16015625, 13667.9921875, -9313.34375,
  -15969.3125, 3698.125, 2026.7109375, 95669.8984375, -57799.09375, 24400.78515625, 1958.015625, -8137.125, -46550.515625, -209769.359375,
  87199.59375, 45122.125, 8870.515625, -16381.31640625, 53495.8203125, -45264.625, -56785.07421875, -3074.009765625, -72040.328125, 15337.77734375,
  70795.390625, -59521.65625, 13642.328125, -99608.015625, -43784.09375, -54109.4296875, 67056.0859375, 51761.53515625, -4992.451171875, -53944.625,
  -43570.828125, -39054.28515625, 76875.140625, 29508.59375, -170989.515625, -8730.44140625, 178739.21875, 41171.96875, -291834.03125, 13585.763671875,
  60305.59375, 78110.65625, -139619.46875, 118735.71875, 58787.640625, -41113.23046875, -58998.15234375, -70985.59375, -1898.5625, 171330.09375,
  -30283.7109375, 5703.2578125, 11.91015625, -14917.73046875, 8354.03125, -7073.05078125, -4132.375, 5999.7578125, -169.546875, 1525.16796875,
  -688.08984375, 8687.26953125, -102607.96875, -467.546875, 57275.546875, 9199.44921875, 15395.8671875, 2702.609375, -10958.26171875, -8189.6640625,
  -5694.69921875, -2035.404296875, -125211.359375, 1996.390625, 8834.375, -6183.2265625, 10783.21484375, -7940.595703125, 6962.013671875, -11921.87890625,
  2630.09375, 20433.486328125, 35520.7421875, 39711.43359375, 22788.841796875, 16980.640625, -22904.46875, -16998.578125, 12920.015625, -21586.068359375,
  -10401.53125, 21038.3046875, 12885.96875, -78142.3125, 44021.6171875, 14285.484375, -49261.875, 5439.009765625, -29412.7265625, -47064.90625,
  13809.5625, 93434.015625, 38626.9453125, -1136.30859375, 86024.4921875, 5602.28125, 14094.2109375, -51693.21875, 9515.279296875, 19757.53515625,
  -71057.578125, 24818.53515625, 588.1171875, 1229.5859375, -6345.201171875, 85154.734375, -44574.5390625, -17507.0625, -12559.939453125, -15282.46875,
  -67895.9609375, -11629.44140625, 11949.048828125, 11297.314453125, -51518.078125, 4029.3203125, -8687.703125, 4453.412109375, -5498.240234375, -1611.759765625,
  -229.8369140625, -3652.375, -6272.9296875, -133886.859375, 7185.0341796875, -1946.447265625, 39597.1796875, -242804.0625, -9323.318359375, 203872.640625,
  -15308.8046875, 8436.96484375, 202602.90625, 4078.5732421875, 34398.77734375, -5096.9296875, 20018.75390625, -30730.53515625, -173443.21875, 107909.875,
  3469.20703125, 37833.921875, 78112.671875, 15553.8671875, 18619.16796875, -13027.234375, 2330.0478515625, 105896.3828125, 28815.9453125, 20432.642578125,
  -25411.40625, -1514.8994140625, -36805.94921875, -6897.1796875, -41073.71484375, 9539.80078125, -20023.25390625, 2945.931640625, 57972.1875, -13983.046875,
  86705.84375, 6434.76953125, 8359.1015625, 970.03125, 22541.927734375, 29336.83984375, 3758.16796875, 23526.90234375, 78403.9296875, -66470.53125,
  -85715.2890625, 56040.5625, 20070.8046875, 24644.5390625, 134237.6875, -6211.044921875, -192056.703125, -38619.625, -1198.15625, 73426.125,
  -1557.421875, 27933.32421875, 3647.4677734375, 99867.7265625, 53957.51171875, 7935.287109375, -7554.046875, -1332.8046875, 206524.484375, -13199.71875,
  -44188.3125, 48650.0625, 220543.953125, -5823.240234375, -89047.65625, -2740.685546875, 42971.0703125, 49365.28125, -9101.421875, -48988.359375,
  -47501.40625, 2422.7265625, -19991.390625, 121585.328125, -4764.0, -9058.2578125, -86666.3125, 16769.0078125, 117728.46875, 29439.9375,
  11947.62890625, -41481.1640625, 15622.78515625, -11248.533203125, 47676.3671875, -86213.265625, 9114.4765625, -42406.6875, 77448.34375, 14940.05078125,
  -75336.4453125, 2599.44140625, 52494.9453125, -15793.09375, -212177.15625, -13876.09375, 5581.9609375, -10600.359375, -65426.2421875, -11693.3046875,
  6121.40625, -13271.921875, -56819.46875, 46594.8359375, 122519.7734375, 86541.6875, -33809.4765625, 12778.880859375, 53013.140625, 64260.38671875,
  -1912.8828125, -11168.22265625, 11072.2197265625, -27214.42578125, -44708.91015625, 2736.109375, 8426.837890625, -10464.734375, 90232.1328125, -3209.849609375,
  -68711.359375, 27808.556640625, 79576.921875, -6112.7705078125, 65123.98828125, -22525.875, 15668.6015625, -25626.802734375, -139853.34375, 5789.923828125,
  -51779.63671875, -33105.3125, -56336.7265625, 22401.74609375, -2436.8359375, -51871.4921875, 31609.78125, 39101.2734375, -105498.8984375, -120275.28125,
  -153294.625, -11428.625, 180137.90625, 16452.51171875, -50898.78125, 35924.4609375, -105661.5078125, 134025.84375, -58839.05078125, -94846.59375,
  -21142.93359375, -46137.65625, 24407.59375, -14747.251953125, -85504.828125, 2390.3984375, 84685.09375, -154051.921875, -119662.671875, -39794.8046875,
  19442.7578125, 71032.6875, -125447.9296875, 20440.96875, -226687.21875, 17214.97265625, -15534.734375, 28569.39453125, -110823.421875, 18825.25,
  -27111.2109375, 28431.625, -62563.328125, -64196.7890625, 14017.234375, 30315.828125, 22358.5703125, -113633.046875, -11175.890625, 8546.64453125,
  -1065.0, 27123.17578125, -15822.28125, -65884.046875, 74572.1484375, 55478.09375, -66023.0625, 7004.671875, -13660.33203125, -18219.7890625,
  -10951.46875, -25760.578125, 20550.63671875, 28487.7421875, -90822.09375, 41448.0703125, -21945.875, -20436.62109375, 11626.5546875, 31242.890625,
  51893.71875, -23002.03125, -8358.46484375, -29208.1875, 72640.7109375, 9948.279296875, -16703.578125, -4162.15234375, 54781.42578125, -14089.58984375,
  46787.53125, -10599.826171875, 26565.296875, -5554.2724609375, -3074.0732421875, 15570.099609375, 7370.833984375, -222505.03125, -89104.1875, -545.921875,
  -11165.3515625, -28295.859375, -11696.30859375, 71567.59375, 32959.9296875, -11316.609375, 88928.5390625, -47042.08203125, 61087.34375, -180.875,
  29677.8359375, -19367.984375, -61429.21875, -70667.296875, -42180.921875, -5074.775390625, -34552.1328125, -68479.359375, 45312.703125, -14959.8359375,
  -2557.4453125, -40892.0859375, 47135.23828125, -1738.65625, -1783.4765625, -7323.28125, -103763.2578125, 45644.1171875, 46669.3203125, 16244.3125,
  -85867.953125, 10293.6640625, -60646.453125, 16718.03125, 75785.1875, 15031.4765625, 123378.890625, 22257.125, 17954.8359375, 22671.96875,
  44867.015625, -20068.47265625, -81993.625, -1602.81640625, 32786.64453125, -8981.5703125, 51889.50390625, 61554.890625, -207305.671875, -59770.23828125,
  63934.765625, 11309.140625, 46894.39453125, -9337.76171875, 38028.609375, -19199.2578125, -67512.640625, -46415.8984375, -5040.1376953125, -8890.291015625,
  -67174.8671875, -179963.84375, -162664.3125, 2741.1796875, -13929.390625, 29253.1640625, -71714.125, -75411.0546875, -71088.6796875, 46739.234375,
  33136.9296875, -11087.4755859375, 50926.65625, 13392.96875, 75036.453125, -39994.3359375, -23366.15625, -111931.015625, -8609.171875, -109626.796875,
  -22275.953125, 1929.623046875, -12118.3125, 36820.57421875, -36800.109375, -10292.87109375, -53582.32421875, 33809.296875, -183385.90625, -44619.59375,
  -53675.640625, -44267.3671875, -187409.328125, 2407.796875, -74282.203125, -2604.359375, 35695.703125, 8957.771484375, 62373.859375, -22329.890625,
  38459.96875, -16324.234375, 20525.26171875, 72381.4375, -66592.5, 122424.5546875, -74697.53125, -19890.625, 27505.58984375, 105294.4375,
  -25296.0234375, 30851.41796875, -18113.1640625, 28045.34375, -26283.484375, 20163.580078125, 6175.697265625, -61567.46875, 857.0, 12391.033203125,
  23141.15625, 77517.390625, 39511.4453125, -48695.67578125, -67771.765625, -9722.24609375, -12700.58203125, -5935.90625, -30358.25, -43671.6484375,
  4600.42578125, 46317.046875, -68935.140625, -6872.91796875, 15699.109375, -10137.26171875, 12053.78125, -19841.3984375, 83724.9375, 39139.921875,
  -142513.765625, 70104.015625, -129793.40625, -228604.109375, 385372.1875, 57942.5, -133846.140625, -22616.4140625, -94383.8515625, -1367.1796875,
  -103651.390625, 124220.03125, 51792.6328125, 71831.0234375, -34215.16015625, -25821.5078125, 56420.53125, 47438.9765625, 89190.203125, -9916.076171875,
  4296.51171875, -258551.046875, 128295.3125, 72333.953125, 129576.109375, -70248.2578125, -10806.84375, -7629.421875, -279660.6875, -10154.107421875,
  28447.34375, -202663.90625, -24958.87109375, -30653.6796875, 52078.56640625, 164826.890625, -255220.125, -51340.58984375, 20925.53125, -51348.796875,
  -9261.859375, 154522.015625, -4780.072265625, 24587.81640625, -2156.7158203125, -70211.546875, 3288.98828125, 50706.53125, -21734.2890625, -73585.8515625,
  16329.5078125, 18741.8984375, -25245.640625, 123231.765625, 14906.328125, 106068.203125, 17496.03125, 3505.12890625, -19783.734375, 54706.109375,
  -32511.6875, -5592.55078125, 101422.0, 21370.609375, 6489.1484375, -48586.703125, 19891.7890625, 8901.46875, 12206.046875, 51521.875,
  -10767.3125, -3524.375, -20426.775390625, 22881.8984375, 58064.55078125, -97.9140625, -47502.5234375, -11226.3984375, -6455.6875, 3984.55078125,
  -58129.984375, -64257.1484375, -7539.0703125, 3831.4765625, -83889.578125, -58374.2265625, 29679.5859375, 50281.19140625, 13044.65625, 6359.99609375,
  78930.7890625, -23787.4609375, 17880.2890625, 18207.84375,
};