#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void print(vector<int> arr) {
  cout << "[ ";
  for (auto val : arr) {
    cout << val << " ";
  }
  cout << "]" << endl;
}

int arrayMaximalAdjacentDifference(vector<int> inputArray) {
  int maxDiff{0};
  int difference {0};

  for (int curNdx = 1; curNdx < inputArray.size(); curNdx++) {
    difference = abs(inputArray[curNdx - 1] - inputArray[curNdx]);
    if (maxDiff < difference)
      maxDiff = difference;
  }

  return maxDiff;
}

int main() {

  vector<int> input {2, 4, 1, 0};
  int result {0};

  print(input);
  result = arrayMaximalAdjacentDifference(input);

  cout << "Result: " << result << endl;

  return EXIT_SUCCESS;
}