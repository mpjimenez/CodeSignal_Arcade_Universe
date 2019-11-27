#include <iostream>
using namespace std;

int addTwoDigits(int n) {
  int first {n % 10};
  int second {(n / 10) % 10};

  return first + second;
}
int main() {
  int n {29};
  int result {0};

  cout << "The integer n: " << n << endl;
  result = addTwoDigits(n);
  cout << "The sum of n's digits: " << result << endl;

  return EXIT_SUCCESS;
}