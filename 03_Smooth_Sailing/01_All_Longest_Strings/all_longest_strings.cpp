#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print(vector<string> vec) {
  cout << "{ ";
  for (auto str : vec) 
    cout << str << " ";

  cout << "}" << endl;

}

int findLongString(vector<string> strings) {
  int longest {0};
  for (auto str : strings) {
    if (str.length() > longest)
      longest = str.length();
  }
  return longest;
}

vector<string> allLongStrings(vector<string> inputArray) {
  vector<string> longest_strings;
  int longest = findLongString(inputArray);

  for (auto str : inputArray) {
    if (str.length() == longest)
      longest_strings.push_back(str);
  }

  return longest_strings;
}

int main() {
  vector<string> input { "aba", "aa", "ad", "vcd", "aba" };
  vector<string> result;

  cout << "Original Input array: ";
  print(input);

  result = allLongStrings(input);
  print(result);
  



  return EXIT_SUCCESS;
}