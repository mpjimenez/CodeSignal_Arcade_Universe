#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> input) {
  for (auto val : input) 
    cout << val << " ";
  
  cout << endl;
}

vector<int> arrayReplace(vector<int> inputArray, int elemToReplace, int substitutionElem) {
  vector<int> res;
  
  for (int ndx = 0; ndx < inputArray.size(); ndx++) {
    if (inputArray[ndx] == elemToReplace)
      res.push_back(substitutionElem);
    else 
      res.push_back(inputArray[ndx]);
  }

  return res;

}


int main() {
  vector<int> input1 {1, 2, 1}; // output should be [3, 2, 3]
  vector<int> res;
  int elemToReplace {1};
  int substitutionElem {3};

  cout << "original vector: ";
  print(input1);
  res = arrayReplace(input1, elemToReplace, substitutionElem);
  cout << "New vector: ";
  print(res);





  return EXIT_SUCCESS;
}