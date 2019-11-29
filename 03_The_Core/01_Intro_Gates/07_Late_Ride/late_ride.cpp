#include <iostream>
using namespace std;
int getDigits(int n) {
  return n % 10 + ((n / 10) % 10);
}

int lateRide(int n) {
  int hours {0};
  int minutes {0};
  int sum {0};

  while (n >= 60) {
    hours++;
    n -= 60;
  }
  cout << "hours: " << hours << endl;
  cout << "n: " << n << endl;
  sum += getDigits(hours);
  sum += getDigits(n);
  


  return sum;
}


int main() {
  // int n = 240; //should return  4 + 0 + 0 + 0 = 4
  int n {808}; // should return 1 + 3 + 2 + 8 = 14
  int result {0};


  result = lateRide(n);

  cout << "The sum is: " << result << endl;


  return EXIT_SUCCESS;
}