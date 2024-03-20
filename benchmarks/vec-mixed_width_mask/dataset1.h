#define DATA_SIZE 1000 

int8_t input1_data[DATA_SIZE] = 
{
    0,   8,   5,   1,   7,   3,   1,   9,   5,   8,   6,   0,   9,   8,   3,   6,   9,   1,   1,   2, 
    4,   3,   6,   7,   3,   6,   8,   3,   4,   9,   5,   5,   2,   2,   7,   6,   5,   6,   1,   0, 
    2,   2,   3,   9,   9,   2,   9,   8,   9,   9,   1,   9,   5,   3,   6,   6,   1,   1,   8,   0, 
    2,   3,   1,   9,   8,   2,   5,   9,   7,   2,   4,   5,   4,   2,   4,   7,   6,   3,   2,   9, 
    2,   1,   6,   6,   3,   3,   4,   2,   3,   3,   5,   0,   9,   4,   3,   5,   5,   9,   7,   2, 
    7,   5,   1,   0,   1,   9,   9,   8,   5,   4,   6,   9,   2,   0,   0,   0,   0,   4,   5,   6, 
    3,   2,   8,   9,   8,   3,   4,   5,   9,   3,   8,   8,   5,   9,   7,   3,   5,   8,   0,   5, 
    6,   4,   4,   1,   0,   0,   2,   0,   4,   7,   8,   4,   4,   3,   5,   5,   8,   6,   2,   2, 
    4,   2,   8,   2,   7,   6,   2,   7,   5,   3,   5,   5,   3,   9,   2,   8,   3,   7,   7,   9, 
    3,   7,   2,   9,   6,   7,   0,   3,   1,   1,   3,   6,   8,   8,   3,   1,   0,   1,   9,   3, 
    5,   7,   5,   8,   5,   0,   1,   0,   1,   1,   7,   3,   9,   0,   1,   1,   8,   4,   2,   2, 
    4,   6,   3,   5,   7,   5,   1,   0,   7,   5,   7,   0,   7,   0,   2,   8,   1,   7,   3,   9, 
    9,   3,   4,   4,   5,   6,   2,   7,   1,   8,   9,   2,   2,   0,   7,   5,   3,   8,   8,   7, 
    2,   0,   4,   4,   7,   4,   0,   2,   3,   5,   7,   8,   4,   7,   5,   7,   0,   3,   8,   9, 
    9,   5,   7,   4,   2,   4,   6,   0,   3,   2,   3,   2,   5,   7,   7,   5,   8,   8,   1,   1, 
    6,   0,   2,   1,   8,   0,   3,   1,   8,   1,   1,   0,   7,   2,   1,   5,   2,   5,   1,   2, 
    6,   7,   7,   0,   0,   8,   8,   5,   3,   4,   0,   6,   0,   1,   7,   9,   6,   8,   8,   2, 
    4,   1,   5,   5,   0,   9,   9,   3,   4,   1,   5,   9,   5,   4,   3,   2,   4,   6,   3,   5, 
    6,   0,   1,   3,   1,   2,   3,   2,   4,   1,   6,   9,   7,   6,   0,   1,   4,   9,   0,   7, 
    8,   1,   1,   0,   1,   8,   8,   4,   1,   2,   8,   8,   5,   3,   6,   4,   8,   9,   1,   4, 
    8,   1,   5,   8,   4,   7,   8,   7,   8,   7,   1,   4,   2,   9,   1,   7,   5,   7,   4,   5, 
    7,   5,   3,   7,   9,   2,   9,   2,   1,   5,   1,   7,   7,   1,   3,   7,   6,   5,   1,   0, 
    5,   8,   0,   5,   7,   6,   7,   4,   0,   9,   7,   9,   8,   3,   0,   8,   9,   7,   1,   8, 
    6,   1,   8,   0,   6,   0,   2,   7,   7,   2,   1,   7,   9,   4,   3,   3,   2,   5,   7,   7, 
    9,   0,   0,   9,   9,   8,   5,   8,   9,   2,   5,   5,   9,   4,   5,   2,   2,   8,   1,   4, 
    7,   0,   6,   1,   2,   3,   7,   6,   0,   3,   9,   6,   7,   9,   2,   1,   1,   3,   1,   7, 
    9,   6,   5,   6,   4,   2,   5,   5,   4,   9,   7,   2,   3,   9,   6,   0,   5,   4,   9,   2, 
    0,   2,   3,   8,   7,   6,   7,   6,   9,   3,   0,   1,   4,   3,   6,   3,   9,   4,   4,   7, 
    7,   9,   5,   8,   0,   5,   9,   8,   1,   9,   2,   1,   3,   0,   0,   0,   4,   7,   3,   3, 
    6,   7,   7,   3,   2,   5,   6,   5,   8,   0,   2,   4,   7,   4,   5,   1,   6,   8,   2,   7, 
    1,   4,   4,   9,   1,   6,   8,   2,   2,   5,   9,   5,   1,   2,   7,   9,   7,   3,   4,   6, 
    7,   1,   3,   3,   3,   3,   7,   0,   4,   5,   1,   3,   2,   3,   0,   3,   9,   6,   9,   3, 
    0,   5,   2,   6,   3,   8,   8,   3,   1,   5,   5,   8,   3,   9,   4,   9,   1,   2,   1,   7, 
    0,   8,   6,   0,   7,   9,   8,   1,   9,   7,   5,   7,   2,   7,   1,   1,   2,   4,   9,   0, 
    3,   6,   3,   1,   1,   1,   8,   7,   5,   2,   0,   6,   3,   9,   1,   0,   9,   1,   1,   5, 
    3,   3,   5,   7,   3,   8,   5,   5,   4,   3,   5,   2,   9,   5,   3,   4,   7,   1,   4,   8, 
    8,   7,   5,   3,   0,   8,   6,   5,   6,   9,   1,   3,   9,   9,   6,   7,   1,   8,   5,   9, 
    4,   3,   1,   2,   1,   5,   8,   1,   9,   2,   4,   3,   7,   4,   7,   5,   4,   3,   7,   4, 
    8,   7,   0,   5,   2,   1,   6,   7,   5,   8,   5,   3,   5,   9,   2,   2,   3,   4,   2,   2, 
    5,   4,   1,   3,   6,   5,   5,   6,   1,   7,   8,   4,   0,   0,   1,   0,   8,   4,   3,   0, 
    0,   1,   0,   3,   7,   6,   2,   9,   0,   6,   9,   6,   8,   7,   7,   4,   6,   5,   9,   8, 
    2,   9,   1,   5,   5,   8,   9,   2,   6,   6,   6,   9,   3,   3,   4,   1,   2,   1,   8,   2, 
    3,   1,   8,   3,   3,   8,   0,   4,   6,   5,   2,   0,   7,   8,   8,   8,   6,   4,   0,   2, 
    4,   2,   6,   0,   3,   4,   0,   0,   7,   8,   5,   4,   3,   3,   2,   4,   4,   6,   5,   3, 
    4,   5,   1,   8,   3,   9,   2,   1,   9,   0,   9,   3,   3,   2,   2,   6,   0,   9,   4,   2, 
    3,   0,   6,   0,   6,   9,   9,   8,   4,   6,   8,   5,   6,   0,   3,   3,   0,   9,   7,   4, 
    8,   8,   5,   1,   7,   0,   6,   5,   9,   7,   8,   2,   6,   8,   7,   4,   8,   6,   6,   6, 
    0,   7,   7,   1,   5,   0,   9,   6,   6,   3,   2,   2,   6,   6,   5,   1,   5,   7,   0,   3, 
    9,   5,   3,   7,   6,   5,   2,   8,   9,   4,   7,   5,   0,   2,   7,   7,   4,   6,   6,   4, 
    8,   3,   6,   2,   1,   3,   2,   7,   2,   9,   6,   6,   9,   2,   6,   3,   8,   6,   4,   9
};

int input2_data[DATA_SIZE] = 
{
  454, 335,   1, 989, 365, 572,  64, 153, 216, 140, 210, 572, 339, 593, 898, 228,  12, 883, 750, 646, 
  500, 436, 701, 812, 981, 150, 696, 564, 272, 258, 647, 509,  88, 703, 669, 375, 551, 936, 592, 569, 
  952, 800, 584, 643, 368, 489, 328, 313, 592, 388, 543, 649, 979, 997, 814,  79, 208, 998, 629, 847, 
  704, 997, 253, 715, 430, 415, 538, 700,   4, 494, 100, 864, 693, 416, 296, 285, 620,  78, 351, 540, 
  646, 169, 527, 289, 796, 801, 720, 758, 745,  92, 989, 271, 853, 788, 531, 222, 461, 241, 358, 332, 
  684, 740, 446, 311, 743, 557, 479, 557, 925, 796, 357, 891, 666, 514, 557, 870, 853, 440,  61, 678, 
  396,   9,  17, 170, 291, 380, 536, 185, 917, 539, 983, 887,  54, 612, 951, 479, 151,   7, 641, 335, 
  730,  95, 728, 280, 395, 688, 911, 476, 815, 729, 265, 127, 236, 214, 180,   6, 503, 596, 173, 643, 
  346, 599,  68, 849, 658, 619, 121, 131, 828, 667, 433, 487, 753, 125, 626,  14,  10, 403, 106, 703, 
  818, 964, 406, 874, 856,  86,  60, 660, 667, 153, 121,  98, 412, 236,  12, 423, 965, 216, 621, 361, 
  921, 715, 647, 299, 886, 682,  36, 493, 551, 537, 969, 643, 434, 415, 303, 438, 860, 203, 478, 988, 
  675, 719, 990, 338, 450, 633, 155, 646, 452, 427, 509, 988, 426,  12, 483, 142, 339, 390,  50, 171, 
  601, 105, 968, 121, 879,  81, 870, 600, 603, 871, 887, 610, 404, 234, 745, 526, 275, 441, 226, 752, 
  943, 726, 709, 201,  54, 758,  53, 397,  41, 141, 416, 747, 219, 478, 770, 180, 482, 691, 725, 173, 
  186, 914,   1, 963, 247, 464, 362, 521, 233, 120,  40, 779, 195, 161, 743, 439, 355, 403, 141, 633, 
  289, 782, 320, 636, 118, 852,  70, 816, 388, 954,  36,  16, 698, 695, 677, 598, 883, 824, 746, 462, 
  511, 534, 440, 428, 732, 726, 702, 547,  86, 798, 215,  21, 651,  59, 429, 657,  96, 973, 659, 966, 
  524,  62, 625, 303, 714, 409,  55, 728, 305, 436, 901, 592, 691, 796, 497, 177, 940, 995, 480, 158, 
  822, 611, 680,  14, 111, 797, 185,   0, 718,  96, 749, 739, 814, 435, 326,  37,  33, 605, 935,  27, 
   88, 441, 339, 344, 554, 365, 954, 639, 396, 991, 249, 338, 832, 974, 393, 266, 470, 348, 336, 419, 
  249, 215, 542, 903, 636, 729, 581, 820, 671, 979, 418, 670, 920, 568, 745, 662, 139, 385, 927, 173, 
  457, 316, 183, 477, 196, 399, 416, 805, 996, 270, 735, 696, 825, 528,  50, 623, 537,  87, 294, 867, 
  110, 398, 781, 646, 375, 943, 897, 589,  44, 288, 845, 742,  99, 522, 443, 432, 165, 930,  28, 461, 
  323, 272, 376, 340, 898, 158, 168, 443, 193, 631, 935, 274, 781, 185, 619, 292, 933, 156, 827,  88, 
  987, 629, 649,  32,   1, 744, 399, 915, 791, 554, 984, 530, 600, 401, 683, 540, 903, 120, 995, 521, 
  622, 224, 895, 530, 820, 651, 226,  96, 262, 569, 238, 126, 610, 191, 238, 796, 884, 573, 108, 140, 
  789, 852,  23, 704, 890, 480,  52, 372, 201, 546, 408, 119, 645, 464,  81, 293,  52, 880, 224, 744, 
  735, 886, 167,   1, 532, 321, 169, 485, 101, 177,  42, 708, 654, 915, 625, 242, 822, 795, 641, 252, 
  245, 151, 876, 333, 601, 938, 775, 397, 233, 755, 454, 424, 210, 962, 900, 923, 655, 529, 595,  90, 
  464, 685,  70, 754,  32, 494,  25, 389, 488,  37, 409, 639,  27, 950, 539,  80, 303, 723, 734, 125, 
  552, 248, 107, 362,  48, 869, 144, 841, 724, 335, 470, 263, 343, 809, 677, 339, 336, 410, 465,  56, 
  590, 485, 406, 993, 746, 238, 525, 336, 256, 134, 546, 722, 367, 943, 106, 629, 396, 208, 429, 523, 
  130, 355, 990, 673, 991, 719, 449,  84, 616, 211, 707, 737, 847, 452, 316, 974, 746, 796, 522, 618, 
  115, 727, 226, 165, 200, 830, 742, 187, 705, 671, 785, 886, 962, 657, 293, 620, 144, 173, 796,  72, 
  678,  80, 793, 685, 637, 967, 241, 898, 693, 372, 601, 721, 398, 553,  72, 174, 978, 325, 558, 185, 
  505, 859, 651, 573, 321, 349, 400, 890, 844, 885, 933, 980, 448, 989,  50, 332, 900, 716, 747, 444, 
    6, 394, 285, 703, 450, 652, 771, 485, 534, 559, 481, 507, 434, 343,  42, 784, 865, 421, 415, 871, 
  539, 162, 105, 481, 595, 115, 350, 964, 287, 232, 154, 602, 539, 943, 872, 121, 652, 811, 747, 362, 
  340, 910, 206, 572, 505, 973, 961, 354, 627, 849, 971, 910, 410, 770,  63, 874, 396, 482, 619, 646, 
  557, 328,  67, 884, 512, 972,   6, 513, 882, 562, 764, 366, 506, 786, 831, 382, 638, 452,  72,  83, 
   59, 932, 929, 924, 961,  69, 797, 985, 854, 885, 600, 389, 232, 793, 179, 773, 689, 775, 494, 139, 
  234, 431, 780, 371,  22, 653, 741, 815, 428, 139, 603, 315, 344, 889, 317, 260, 861, 377, 511, 304, 
   70,  35, 854, 576, 490, 326, 303, 431, 813, 708, 388, 962, 967, 442,  49, 831, 251, 321, 741, 179, 
  176, 117, 523, 764, 952, 704, 531, 804,  23, 611, 846, 375, 854, 971,  24, 639, 318, 723, 662, 647, 
  281, 158, 294, 885, 734, 866, 471, 296, 673, 472, 439,   5, 155, 506, 948, 600, 445, 222, 784, 349, 
  943, 150, 366, 444, 604, 720, 340, 972, 911, 321, 435,  50,  78, 761, 950, 238,  27, 226, 201, 176, 
  877, 450, 879,  99, 143,  31, 812, 771, 527, 488, 797, 194, 293, 966, 276, 345, 413, 197, 386, 116, 
  322, 680, 538, 553, 960, 874,  48, 506, 898, 539, 495, 764, 805, 286, 432, 836, 192, 825, 778, 586, 
  359, 352, 746,  11, 749,   5, 408, 643, 441, 368,  97, 169, 359, 527, 672,  69, 880, 298, 300, 327, 
  923, 829, 816, 497, 243, 981, 917, 713, 653, 503, 406, 543, 108, 304, 464, 954,  86, 802, 446,  28
};

int verify_data[DATA_SIZE] = 
{
  454,   1,   1, 989,   1, 572,  64,   1,   1,   1,   1, 572,   1,   1, 898,   1,   1, 883, 750, 646, 
  500, 436,   1,   1, 981,   1,   1, 564, 272,   1,   1,   1,  88, 703,   1,   1,   1,   1, 592, 569, 
  952, 800, 584,   1,   1, 489,   1,   1,   1,   1, 543,   1,   1, 997,   1,   1, 208, 998,   1, 847, 
  704, 997, 253,   1,   1, 415,   1,   1,   1, 494, 100,   1, 693, 416, 296,   1,   1,  78, 351,   1, 
  646, 169,   1,   1, 796, 801, 720, 758, 745,  92,   1, 271,   1, 788, 531,   1,   1,   1,   1, 332, 
    1,   1, 446, 311, 743,   1,   1,   1,   1, 796,   1,   1, 666, 514, 557, 870, 853, 440,   1,   1, 
  396,   9,   1,   1,   1, 380, 536,   1,   1, 539,   1,   1,   1,   1,   1, 479,   1,   1, 641,   1, 
    1,  95, 728, 280, 395, 688, 911, 476, 815,   1,   1, 127, 236, 214,   1,   1,   1,   1, 173, 643, 
  346, 599,   1, 849,   1,   1, 121,   1,   1, 667,   1,   1, 753,   1, 626,   1,  10,   1,   1,   1, 
  818,   1, 406,   1,   1,   1,  60, 660, 667, 153, 121,   1,   1,   1,  12, 423, 965, 216,   1, 361, 
    1,   1,   1,   1,   1, 682,  36, 493, 551, 537,   1, 643,   1, 415, 303, 438,   1, 203, 478, 988, 
  675,   1, 990,   1,   1,   1, 155, 646,   1,   1,   1, 988,   1,  12, 483,   1, 339,   1,  50,   1, 
    1, 105, 968, 121,   1,   1, 870,   1, 603,   1,   1, 610, 404, 234,   1,   1, 275,   1,   1,   1, 
  943, 726, 709, 201,   1, 758,  53, 397,  41,   1,   1,   1, 219,   1,   1,   1, 482, 691,   1,   1, 
    1,   1,   1, 963, 247, 464,   1, 521, 233, 120,  40, 779,   1,   1,   1,   1,   1,   1, 141, 633, 
    1, 782, 320, 636,   1, 852,  70, 816,   1, 954,  36,  16,   1, 695, 677,   1, 883,   1, 746, 462, 
    1,   1,   1, 428, 732,   1,   1,   1,  86, 798, 215,   1, 651,  59,   1,   1,   1,   1,   1, 966, 
  524,  62,   1,   1, 714,   1,   1, 728, 305, 436,   1,   1,   1, 796, 497, 177, 940,   1, 480,   1, 
    1, 611, 680,  14, 111, 797, 185,   0, 718,  96,   1,   1,   1,   1, 326,  37,  33,   1, 935,   1, 
    1, 441, 339, 344, 554,   1,   1, 639, 396, 991,   1,   1,   1, 974,   1, 266,   1,   1, 336, 419, 
    1, 215,   1,   1, 636,   1,   1,   1,   1,   1, 418, 670, 920,   1, 745,   1,   1,   1, 927,   1, 
    1,   1, 183,   1,   1, 399,   1, 805, 996,   1, 735,   1,   1, 528,  50,   1,   1,   1, 294, 867, 
    1,   1, 781,   1,   1,   1,   1, 589,  44,   1,   1,   1,   1, 522, 443,   1,   1,   1,  28,   1, 
    1, 272,   1, 340,   1, 158, 168,   1,   1, 631, 935,   1,   1, 185, 619, 292, 933,   1,   1,   1, 
    1, 629, 649,   1,   1,   1,   1,   1,   1, 554,   1,   1,   1, 401,   1, 540, 903,   1, 995, 521, 
    1, 224,   1, 530, 820, 651,   1,   1, 262, 569,   1,   1,   1,   1, 238, 796, 884, 573, 108,   1, 
    1,   1,   1,   1, 890, 480,   1,   1, 201,   1,   1, 119, 645,   1,   1, 293,   1, 880,   1, 744, 
  735, 886, 167,   1,   1,   1,   1,   1,   1, 177,  42, 708, 654, 915,   1, 242,   1, 795, 641,   1, 
    1,   1,   1,   1, 601,   1,   1,   1, 233,   1, 454, 424, 210, 962, 900, 923, 655,   1, 595,  90, 
    1,   1,   1, 754,  32,   1,   1,   1,   1,  37, 409, 639,   1, 950,   1,  80,   1,   1, 734,   1, 
  552, 248, 107,   1,  48,   1,   1, 841, 724,   1,   1,   1, 343, 809,   1,   1,   1, 410, 465,   1, 
    1, 485, 406, 993, 746, 238,   1, 336, 256,   1, 546, 722, 367, 943, 106, 629,   1,   1,   1, 523, 
  130,   1, 990,   1, 991,   1,   1,  84, 616,   1,   1,   1, 847,   1, 316,   1, 746, 796, 522,   1, 
  115,   1,   1, 165,   1,   1,   1, 187,   1,   1,   1,   1, 962,   1, 293, 620, 144, 173,   1,  72, 
  678,   1, 793, 685, 637, 967,   1,   1,   1, 372, 601,   1, 398,   1,  72, 174,   1, 325, 558,   1, 
  505, 859,   1,   1, 321,   1,   1,   1, 844, 885,   1, 980,   1,   1,  50, 332,   1, 716, 747,   1, 
    1,   1,   1, 703, 450,   1,   1,   1,   1,   1, 481, 507,   1,   1,   1,   1, 865,   1,   1,   1, 
  539, 162, 105, 481, 595,   1,   1, 964,   1, 232, 154, 602,   1, 943,   1,   1, 652, 811,   1, 362, 
    1,   1, 206,   1, 505, 973,   1,   1,   1,   1,   1, 910,   1,   1,  63, 874, 396, 482, 619, 646, 
    1, 328,  67, 884,   1,   1,   1,   1, 882,   1,   1, 366, 506, 786, 831, 382,   1, 452,  72,  83, 
   59, 932, 929, 924,   1,   1, 797,   1, 854,   1,   1,   1,   1,   1,   1, 773,   1,   1,   1,   1, 
  234,   1, 780,   1,   1,   1,   1, 815,   1,   1,   1,   1, 344, 889, 317, 260, 861, 377,   1, 304, 
   70,  35,   1, 576, 490,   1, 303, 431,   1,   1, 388, 962,   1,   1,   1,   1,   1, 321, 741, 179, 
  176, 117,   1, 764, 952, 704, 531, 804,   1,   1,   1, 375, 854, 971,  24, 639, 318,   1,   1, 647, 
  281,   1, 294,   1, 734,   1, 471, 296,   1, 472,   1,   5, 155, 506, 948,   1, 445,   1, 784, 349, 
  943, 150,   1, 444,   1,   1,   1,   1, 911,   1,   1,   1,   1, 761, 950, 238,  27,   1,   1, 176, 
    1,   1,   1,  99,   1,  31,   1,   1,   1,   1,   1, 194,   1,   1,   1, 345,   1,   1,   1,   1, 
  322,   1,   1, 553,   1, 874,   1,   1,   1, 539, 495, 764,   1,   1,   1, 836,   1,   1, 778, 586, 
    1,   1, 746,   1,   1,   1, 408,   1,   1, 368,   1,   1, 359, 527,   1,   1, 880,   1,   1, 327, 
    1, 829,   1, 497, 243, 981, 917,   1, 653,   1,   1,   1,   1, 304,   1, 954,   1,   1, 446,   1
};