#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void print(vector<int> a) {
  for (auto val : a)
    cout << val << " ";
  cout << endl;
}

int absoluteValuesSimMinimization(vector<int> a) {
  int total {0};
  int minimum {999999999};
  int result {0};
  if (a.size() == 1)
    return a[0];
    
  for (int val = 0; val < a.size(); val++) {
    for (int ndx = 0; ndx < a.size(); ndx++) {
      total += abs(a[ndx] - a[val]);
    }
    cout << "number: " << a[val] << " total: " << total << endl;
    if (total < minimum) {
      minimum = total;
      result = a[val];
    }
    total = 0;
  }

  return result;
}

int main() {
  int result {0};
  vector<int> a1 {2, 4, 7}; // should be 4
  vector<int> a2 {2, 3}; // should be 2
  vector<int> a3 {23};
  vector<int> a4 {-10, -10, -10, -10, -10, -9, -9, -9, -8, -8, -7, -6, -5, -4, -3, -2, -1, 0, 0, 0, 0, 1, 
                  2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26,
                  27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; // should be 15

  print(a4);
  result = absoluteValuesSimMinimization(a4);

  cout << "The value that miminizes the absolute sum is " << result << endl;
  return EXIT_SUCCESS;
}