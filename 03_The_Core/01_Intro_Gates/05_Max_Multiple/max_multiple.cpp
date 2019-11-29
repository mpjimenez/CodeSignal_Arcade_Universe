#include <iostream>
using namespace std;

int maxMultiple(int divisor, int bound) {
  int arg {2};
  int res {0};
  
  while (arg <= bound) {
    if (arg % divisor == 0)
      res = arg;
    arg++;
  }


  return res;
}

int main() {
  int divisor {10}; // should be 50
  int bound {50};
  int result {0};

  result = maxMultiple(divisor, bound);

  cout << "The largest integer divisible by " << divisor << " and LESS THAN " << bound << " is: " << result << endl;



  return EXIT_SUCCESS;
}