#include <iostream>
using namespace std;


int halvingSum(int n) {
  int sum {n}, divisor {2};

  while (divisor <= n) {
    sum += (n / divisor);
    divisor *= 2;

  }
  return sum;
}


int main(int argc, char** argv) {
  int n {25}; // result should be 47
  int result; 

  result = halvingSum(n);

  cout << "The result with n = " << n << " is: " << result << endl;
  return EXIT_SUCCESS;
}