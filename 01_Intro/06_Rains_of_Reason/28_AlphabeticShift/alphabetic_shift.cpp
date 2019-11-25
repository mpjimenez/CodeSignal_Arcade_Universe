#include <iostream>
#include <string>
using namespace std;

string alphabeticShift(string inputString){
  /*
    ASCII value for lowercase numbers a- z --> [97 - 122]
  */
  string res;
  cout << "original string: " << inputString << endl;
  for (auto ltr : inputString) {
    cout << ltr << " --- ";
    cout << ltr + 1 << "  " << endl;
    if (ltr == 122) // if it's a z should become a
      res += 97;
    else
      res += ltr+1;
  }
  cout << endl;
  cout << "shifted: " << res << endl;
  return res;
}

int main() {
  string inputString1 {"crazy"}; // output should be "dsbaz"
  string inputString2 {"z"}; // output should be "a"

  alphabeticShift(inputString1);
  return EXIT_SUCCESS;
}