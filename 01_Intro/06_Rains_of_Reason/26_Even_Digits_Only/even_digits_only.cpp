#include <iostream>
using namespace std;

bool evenDigitsOnly(int n){
  int digit {0};
  while (n > 0) {
    digit = n % 10;
    // cout << "digit: " << digit << endl;
    // cout << "digit % 2 = " << digit % 2 << endl;
    if (digit % 2 != 0)
      return false;
    else 
     n /= 10;
  }



  return true;
}

int main() {
  int n {248622};
  //int n {642386};
  bool res;
  

  cout << "Integer n: " << n << endl;
  if (evenDigitsOnly(n))
    cout << "The result of evenDigitsOnly(" << n << ") is True!" << endl;
  else 
     cout << "The result of evenDigitsOnly(" << n << ") is " << "False!" << endl;
  


  
  return EXIT_SUCCESS;
}