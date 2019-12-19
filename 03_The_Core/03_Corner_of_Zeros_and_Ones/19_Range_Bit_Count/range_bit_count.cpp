#include <iostream>
using namespace std;

int getBits(int x) {
  int num_ones {0};
  while (x > 0) {
    num_ones += (x & 1);
    x >>= 1; 
  }
  return num_ones;
}

int rangeBitCount(int a, int b) {
  int number_of_ones {0};
  
  for (int x = a; x <= b; x++) {
    number_of_ones += getBits(x);
  }
   
  return number_of_ones;
}


int main(int argc, char** argv) {
  int a{2}, b{7}; // should be 1 + 2 + 1 + 2 + 2 + 3 = 11 (1's)
  int number_of_ones {0};

  number_of_ones = rangeBitCount(a, b);
  cout << "The number of ones numbers from [" << a << ", " << b << "] is: " << number_of_ones << endl;

  return EXIT_SUCCESS;
}