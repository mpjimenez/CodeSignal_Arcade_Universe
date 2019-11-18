#include <iostream>
#include <string>
#include <map>
using namespace std;

bool palindromeRearranging(string inputString) {
  map<char, int> m;
  int numOdd {0};
  bool result;

  // populate map <char, # of occurrences in string>
  for (char const &c : inputString)
    if(m.count(c) > 0) // key exists in map
      m[c] += 1;
    else  // key is not in map
      m[c] = 1;

   // iterate through map to see if theres more than 1 letter that has odd occurrences
   for (auto itr = m.begin(); itr != m.end(); itr++) {
    cout << "key: " << itr->first << " value: " << itr->second << endl;
    if (itr->second % 2 != 0)
      numOdd +=1;
  }

  cout << "numOdd: " << numOdd << endl;
  
  if (numOdd > 1)
    return false;
  else
    return true;

}

int main() {

  string inputString {"aabb"}; // TRUE: rearrange to "abba"
  string inputString2 {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaabc"}; // false
  string inputString3 {"abbcabb"}; //  TRUE: rearrange to "abbcbba"
  string inputString4 {"zyyzzzzz"}; // TRUE: rearrange to "zzzyyzzz"
  string inputString5 {"z"}; // TRUE: 
  bool result;

  cout << "\ninputString: " << inputString3 << endl << endl;
  result = palindromeRearranging(inputString3);
  
  if (result)
    cout << "True" << endl;
  else 
    cout << "False" << endl;
 
  return EXIT_SUCCESS;
}