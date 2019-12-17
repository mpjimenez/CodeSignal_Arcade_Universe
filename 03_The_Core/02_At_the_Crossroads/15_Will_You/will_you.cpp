#include <iostream>
using namespace std;

bool willYou(bool young, bool beautiful, bool loved) {
  if (young && beautiful && !loved)
    return true;
  else if (!young && !beautiful && loved)
    return true;
  else if (!young && beautiful && loved)
    return true;
  else if (young && !beautiful && loved)
    return true;
      
  return false;

}


int main() {
  bool young{true}, beautiful{true}, loved{true};
  bool result;

  result = willYou(young, beautiful, loved);
  if (result)
    cout << "This person contradicts Mary's beliefs!" << endl;
  else 
    cout << "This person supports Mary's beliefs!" << endl;
  return EXIT_SUCCESS;
}