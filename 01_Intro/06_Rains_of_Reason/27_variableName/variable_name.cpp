#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool variableName(string name) {
  /*
  *  \W Any nonalphanumeric or underscore. Same as [^a-zA-Z0-9_]
  *  \w Any alphanumeric in uper or lowercase and underscore. Same as [a-zA-Z0-9_]
  */
 
    regex r("[^\\W0-9][\\w]*");
    if (regex_match(name, r)) {
      cout << "\"" << name << "\"" << " IS a valid variable name" <<  endl;
      return true;
    }
    else {
      cout << "\"" << name <<"\"" << " IS NOT a valid variable name" << endl;
    }
    return false;
}

int main() {
  string name1 {"var_1__Int"};
  string name2 {"qq-q"};
  string name3 {"2w2"};
  string name4 {" variable"};
  string name5 {"&ss"};
  variableName(name3);
  return EXIT_SUCCESS;
}