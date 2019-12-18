#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int sumUpDigits(string inputString) {
  char ltrs[inputString.length() + 1];
  int sum {0};

  strcpy(ltrs, inputString.c_str());

  for (auto val : ltrs) {
    if ((val - 48) >= 0 && (val - 48) <= 10)
      sum += (val - 48);
  }
 
  return sum;
}


int main(int argc, char** argv) {
  string inputString {"2 apples, 12 oranges"};
  int sum {0};

  sum = sumUpDigits(inputString);
  cout << "The sum of digits in \"" << inputString << "\" is: " << sum << endl;
  return EXIT_SUCCESS;
}