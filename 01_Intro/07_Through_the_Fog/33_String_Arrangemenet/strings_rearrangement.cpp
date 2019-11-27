#include <iostream>
#include <vector>
#include <string>  

using namespace std;

void print(vector<string> inputArray) {
  cout << "[ ";
  for (auto val : inputArray)
    cout << val << " ";
  cout << "]" << endl;
}

bool stringsRearrangement(vector<string> inputArray) {
  int count{0};

  for (int first = 0; first < inputArray.size(); first++) {
    for (int second = 0; second < inputArray.size(); second++) {
      if (first != second) {
       cout << inputArray[first] << " " << inputArray[second] << endl;
      }
    }
  }
 

  return false;
}

int main() {
  vector<string> inputArray1 {"aba", "bbb", "bab"}; //false
  vector<string> inputArray2 {"ab", "bb", "aa"}; //true
  vector<string> inputArray3 {"q", "q"}; // false
  vector<string> inputArray4 {"zzzzab", "zzzzbb", "zzzzaa"}; // true

  print(inputArray1);
  stringsRearrangement(inputArray1);

  return EXIT_SUCCESS;
}