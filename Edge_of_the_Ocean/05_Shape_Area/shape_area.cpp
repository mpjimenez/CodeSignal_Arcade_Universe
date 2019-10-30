#include <iostream>
#include <cmath>
using namespace std;

int shapeArea(int n) {
  if (n == 1)
    return 1;
  else {
    return pow(n, 2) + pow(n - 1, 2);
  }
}

int main() {
  //int n {4};
  int n {5};
  int result {0};

  result = shapeArea(n);
  cout << "The area of " << n << "-interesting polygon is: " << result << endl;



  return EXIT_SUCCESS;
}