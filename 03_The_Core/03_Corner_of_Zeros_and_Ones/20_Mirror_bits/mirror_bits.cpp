#include <iostream>
using namespace std;

void printBits(int a) {
  if (a > 1)
    printBits(a / 2);

  cout << a % 2;
}

int mirrorBits(int a) {
  int reverse {0};
  while (a > 0) {
    reverse <<= 1;
    if ((a & 1) == 1)
      reverse ^= 1;
    a >>=1;
  }

  return reverse;
}

int main(int argc, char** argv) {
  int a {97}; // 1100001
  int mirrored {0}; // should equal 67 (1000011)

  mirrored = mirrorBits(a);
  cout << "The original number is " << a << " binary: ";
  printBits(a);
  cout << endl;

  cout << "The mirrored number is " << mirrored << " binary: ";
  printBits(mirrored);
  cout << endl;

  return EXIT_SUCCESS;
}