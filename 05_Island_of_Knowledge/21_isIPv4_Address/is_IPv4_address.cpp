#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <regex>
#include <vector>
using namespace std;

bool isInteger(const string &s){
    if (regex_match(s, regex("[0-9]")))
      return true;
    else if (regex_match(s, regex("[0-9][0-9]")))
      return true;
    else if (regex_match(s, regex("[0-9][0-9][0-9]")))
      return true;
    else
      return false;
}


bool isIPv4Address(std::string inputString) {
  bool IPv4 = true;
  vector<string> tokens;
  string subString;
  stringstream check1(inputString);
  int myInt {0}; 

  while(getline(check1, subString, '.')) {
    if (subString == "")
      tokens.push_back(subString);

    if (isInteger(subString)) {
      myInt = stoi(subString);
      if (myInt <= 255)
        tokens.push_back(subString);
    }
      
  }
  
  if (tokens.size() != 4)
    return false;
  
  for (auto str : tokens)
    if (str == "")
      return false;
  
  
  
  return IPv4;

}

int main() {
  bool result;
  string inputString {"172.16.254.1"}; // true
  string inputString2 {"172.316.254.1"}; // true
  string inputString3 {".254.255.0"}; // false
  string inputString4 {"1.1.1.1a"}; // false
  string inputString5 {"0..1.0.0"}; // false
  string inputString6 {"a0.1.1.1"}; // false
  string inputString7 {"0..1.0.0"}; // false
  string inputString8 {".254.255.0"}; // false

  cout << "inputString: " << inputString7 << endl;

  result = isIPv4Address(inputString8);
  if (result) 
    cout << inputString8 << " is a valid IPv4 address." << endl;
  else 
    cout << inputString8 << " is not a valid IPv4 address." << endl;

  return EXIT_SUCCESS;
}