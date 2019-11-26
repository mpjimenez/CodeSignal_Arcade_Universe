#include <iostream>
using namespace std;

int depositProfit(int deposit, int rate, int threshold) {

  int years{0};
  float total {float(deposit)};

  while (total < threshold) {
    total = total + (total * (rate/float(100)));
    years++;
    cout << "years: " << years << " total: " << total << endl; 
  }


  return years;
}

int main() {

  int deposit {100};
  int rate {20};
  int threshold {170};
  int numYears {0};

  numYears = depositProfit(deposit, rate, threshold);
  cout << "It'll take " << numYears << " to get " << threshold << " starting with " << deposit << " Dollars" << endl;
  return EXIT_SUCCESS;
}