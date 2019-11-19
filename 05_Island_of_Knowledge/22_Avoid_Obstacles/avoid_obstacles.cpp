#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> vec) {
  cout << "inputArray: [ ";
  for (auto val : vec) 
    cout << val << " ";
  cout << "]" << endl;
}

int avoidObstacles(vector<int> inputArray) {



  return 1;
}

int main() {
  vector<int> inputArray1 {5, 3, 6, 7, 9}; // length of minimal jump 4.
  vector<int> inputArray2 {2, 3}; //length of minimal jump is 4
  print(inputArray1);


  return EXIT_SUCCESS;
}