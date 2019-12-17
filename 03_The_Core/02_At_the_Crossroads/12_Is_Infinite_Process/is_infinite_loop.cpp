#include <iostream>
using namespace std; 

bool isInfiniteLoop(int a, int b) {
  if (a == b)
    return false;
  
  else if (a < b) {
    
    if ((abs(a - b) - 1) != 0 && (abs(a - b) - 1) % 2 != 0)
      return false;
  }
  
  return true;

}

int main() {
  int a {2}, b {6};
  bool result;

  result = isInfiniteLoop(a, b);
  if (result)
    cout << "The pseudocode WILL produce an infinite loop!" << endl;
  else 
    cout << "The pseudocode WILL NOT produce an infinite loop!" << endl;


  return EXIT_SUCCESS;
}