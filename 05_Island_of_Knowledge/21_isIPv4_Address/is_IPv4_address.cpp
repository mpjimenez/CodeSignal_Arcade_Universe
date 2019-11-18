#include <iostream>
#include <string>
using namespace std;

int main() {

  string inputString {"172.16.254.1"}; // true
  string inputString2 {"172.316.254.1"}; // true
  string inputString3 {".254.255.0"}; // false
  string inputString4 {"1.1.1.1a"}; // false
  string inputString5 {"0..1.0.0"}; // false

  cout << "inputString: " << inputString << endl;
  

  return EXIT_SUCCESS;
}