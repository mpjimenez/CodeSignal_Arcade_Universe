#include <iostream>
using namespace std;

int candies(int n, int m) {
  return m - (m % n);
}

int main() {
  int n {3};
  int m {10};
  int result {0};

  result = candies(n, m);

  cout << "With " << n << " children and " << m << " pieces of candy" << endl;
  cout << "each child can have " << result << " pieces!" << endl;

  return EXIT_SUCCESS;
}