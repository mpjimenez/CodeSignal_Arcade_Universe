#include <iostream>
using namespace std;


bool arithmeticExpression(int a, int b, int c) {
  if (a + b == c) {
    cout << "c is: " << c << endl;
    cout << a << " + " << b << " = " << a + b << endl;
    return true;
  }
  else if (a - b == c) {
    cout << "c is: " << c << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    return true;
  }
  else if (a * b == c) {
    cout << "c is: " << c << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    return true;
  }
  else if (double(a) / double(b) == c) {
    cout << "c is: " << c << endl;
    cout << a << " / " << b << " = " << double(a) / double(b) << endl;
    return true;
  }

  return false;
}

int main() {
  int a{8}, b{3}, c{2};
  int result;

  result = arithmeticExpression(a, b, c);
  if (result)
    cout << "Arithmetic expression IS possible!" << endl;
  else 
    cout << "ARithmetic expression IS NOT possible!" << endl;
}