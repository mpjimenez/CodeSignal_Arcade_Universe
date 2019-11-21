#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

void print(map<char, int> &m) {
  for (const auto &p : m) 
    cout << "key: " << p.first << " value: " << p.second << endl; 
}

void populateMap(string str, map<char, int> &map) {
  for (char const &c : str)
    if(map.count(c) > 0) // key exists in map
      map[c] += 1;
    else  // key is not in map
      map[c] = 1;
}

int commonCharacterCount(string str1, string str2) {
  int common {0};
  map<char, int> map1;
  map<char, int> map2;

  populateMap(str1, map1);
  populateMap(str2,map2);

  // iterate through maps and get the keys that are in both.
  // with the common keys get value that's least in value
  for(auto itr1 = map1.begin(); itr1 != map1.end(); itr1++) {
    //cout << "map1: " << itr1->first << " " << itr1->second << endl;
    for (auto itr2 = map2.begin(); itr2 != map2.end(); itr2++) {
      if (itr1->first == itr2->first) {
        if (itr1->second < itr2->second)
          common += itr1->second;
        else
          common += itr2->second;
      }
    }
  }
  return common;
}

int main() {
  int common {0};

  string s1 {"aabcc"};
  string s2 {"adcaa"};
  common = commonCharacterCount(s1, s2);
  cout << "string1 :" << s1 << "  " << "string2: " << s2 << endl;
  cout << "common characters: " << common << endl;
  return EXIT_SUCCESS;
}