#include <iostream>
#include <string>
using namespace std;

int extraNumber(int a, int b, int c) {
  if (a == b)
    return c;
  else if (a == c)
    return b;
  else 
    return a;
}


int main() {
  int a {2}, b {7}, c {2};
  int result;

  result = extraNumber(a, b, c);
  cout << "The extra number is: " << result << endl;
  return EXIT_SUCCESS;
}