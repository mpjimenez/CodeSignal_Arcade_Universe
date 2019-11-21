#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> vec) {
  cout << "inputArray: [ ";
  for (auto val : vec) 
    cout << val << " ";
  cout << "]" << endl;
}

int avoidObstacles(vector<int> inputArray) {
  bool collision;
  int count {0};
  cout << "inputArray:" << endl;
  print(inputArray);

  for (int jump =  2; jump <= 1001; jump++) {
    count = 0;
    for (auto val : inputArray) {
      cout << "val: " << val << " jump: " << jump;
      cout << " val % jump = " << val % jump << endl;

      if (val % jump != 0) 
        count += 1;
    }
    cout << "count: " << count << endl;
    cout << "=====================================" << endl;
    if (count == inputArray.size())
      return jump;
   
  }
  

  return -1;
}

int main() {
  vector<int> inputArray1 {5, 3, 6, 7, 9}; // length of minimal jump 4.
  vector<int> inputArray2 {2, 3}; //length of minimal jump is 4
  vector<int> inputArray3 {5, 8, 9, 13, 14}; // 6
  vector<int> inputArray4 {35, 332, 971, 336, 631, 112, 221, 40, 203, 246, 2, 494, 189, 934, 416, 286, 463, 769, 503, 617, 594, 947, 364, 924,
                           224, 103, 308, 789, 10, 692, 89, 276, 134, 58, 407, 877, 132, 968, 874, 431, 385, 953, 328, 850, 730, 745, 375, 560,
                           412, 191, 725, 418, 53, 295, 292, 512, 901, 128, 619, 306, 391, 356, 642, 970, 379, 694, 174, 426, 780, 249, 71, 720,
                           55, 579, 774, 741, 598, 811, 541, 471, 242, 376, 460, 400, 205, 761, 621, 514, 513, 495, 787, 354, 73, 158, 704, 643,
                           596, 405, 403, 920, 339, 434, 654, 972, 30, 28, 78, 152, 309, 268, 51, 501, 564, 759, 627, 108, 839, 188, 987, 878,
                           786, 881, 65, 753, 355, 445, 131, 179, 545, 595, 396, 609, 961, 223, 19, 888, 709, 327, 79, 743, 476, 955, 735, 816,
                           23, 322, 845, 696, 917, 698, 105, 703, 5, 886, 802, 324, 702, 935, 12, 528, 284, 638, 320, 538, 679, 228, 833, 656, 
                           145, 844, 757, 122, 469, 386, 167, 298, 554, 95, 90, 657, 358, 25, 589, 365, 202, 389, 321, 484, 399, 160, 864, 903,
                           723, 239, 85, 146, 443, 43, 266, 620, 607, 124, 699, 618, 792, 585, 144, 591, 371, 714, 863, 929, 441, 140, 362, 323,
                           251, 782, 394, 197, 142, 163, 719, 873, 727, 731, 957, 423, 490, 448, 689, 218, 31, 291, 170, 211, 176, 154, 196, 
                           77, 569, 384, 600, 115, 258, 156, 515, 651, 343, 822, 630, 325, 530, 419, 69, 318, 29, 781, 372, 539, 815, 504, 575, 
                           13, 573, 976, 853, 272, 806, 486, 587, 359, 790, 603, 926, 884, 998, 914, 101, 906, 662, 597, 136, 533, 479, 543, 
                           872, 498, 293, 210, 747, 57, 663, 70, 754, 415, 969, 795, 157, 18, 417, 130, 588, 180, 548, 116, 201, 551, 240, 752,
                           722, 707, 141, 891, 991, 277, 794, 304, 109, 885, 887, 44, 544, 772, 345, 300, 526, 382, 329, 889, 578, 691, 173, 
                           483, 238, 307, 875, 500, 751, 835, 841, 435, 944, 84, 248, 959, 183, 481, 846, 216, 413, 222, 900, 665, 843, 369, 
                           114, 67, 940, 348, 466, 814, 485, 777, 985, 659, 42, 360, 810, 951, 290, 557, 149, 978, 462, 15, 576, 697, 994, 7,
                           264, 653, 302, 606, 828, 866, 677, 442, 932, 927, 967, 75, 402, 919, 737, 159, 36, 673, 524, 225, 271, 177, 939, 
                           133, 478, 16, 583, 876, 867, 854, 995, 447, 522, 61, 521, 477, 468, 151, 632, 350, 200, 740, 270, 219, 687, 330, 41,
                           911, 813, 257, 599, 123, 784, 243, 535, 710, 641, 946, 195, 247, 667, 86, 837, 206, 713, 851, 561, 102, 980, 489, 
                           357, 192, 147, 166, 635, 542, 812, 634, 83, 729, 760, 658, 117, 283, 558, 420, 778, 373, 244, 378, 744, 454, 475, 
                           827, 37, 104, 860, 383, 690, 344, 398, 125, 106, 428, 508, 227, 88, 750, 915, 826, 736, 556, 686, 831, 269, 580, 
                           172, 212, 693, 60, 421, 549, 381, 236, 614, 941, 138, 664, 948, 986, 829, 672, 237, 800, 796, 981, 648, 256, 234, 
                           233, 262, 943, 319, 444, 408, 623, 169, 933, 511, 602, 47, 650, 574, 232, 217, 337, 882, 231, 107, 253, 706, 220, 
                           805, 388, 855, 836, 204, 705, 577, 316, 340, 534, 942, 261, 451, 153, 629, 758, 493, 110, 820, 229, 748, 315, 8, 
                           966, 126, 446, 688, 14, 186, 374, 424, 572, 776, 937, 892, 821, 746, 209, 734, 296, 259, 472, 97, 289, 334, 571, 
                           193, 879, 717, 94, 936, 938, 1000, 732, 661, 260, 100, 363, 452, 563, 856, 429, 297, 414, 492, 999, 908, 241, 771,
                           21, 823, 770, 207, 647, 370, 187, 671, 317, 931, 945, 652, 118, 701, 59, 605, 411, 80, 82, 870, 928, 436, 546, 666,
                           422, 280, 958, 6, 338, 121, 639, 608, 930, 613, 570, 506, 213, 797}; // minimal jump 255


  int result {0};
  result = avoidObstacles(inputArray4);

  cout << "The minimal jump is " << result << endl;


  return EXIT_SUCCESS;
}