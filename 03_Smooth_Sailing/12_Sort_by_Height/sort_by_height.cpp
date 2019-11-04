#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> a) {
  for (auto val : a) {
    cout << val << " ";
  }
  cout << endl;
}

vector<int> sortByHeight(vector<int> a) {
  int minNdx{0};
  int minVal {10000};
  int temp{0};

  for (int curNdx = 0; curNdx < a.size() - 1; curNdx++) {
    minNdx = curNdx;
    for (int x = curNdx + 1; x < a.size(); x++) {
      if (a[curNdx] > a[x] && a[x] > 0) {
        if (minVal > a[x]) {
          minVal = a[x];
          minNdx = x;
        }
      }
    }
    temp = a[curNdx];
    a[curNdx] = minVal;
    a[minNdx] = temp;
    minVal = 1000;
  }
  
  return a;
}

int main() {
  vector<int> vec1{-1, 150, 190, 170, -1, -1, 160, 180};
  vector<int> expected1 {-1, 150, 160, 170, -1, -1, 180, 190};
  vector<int> vec2{23, 54, -1, 43, 1, -1, -1, 77, -1, -1, -1, 3};
  vector<int> expected2{1, 3, -1, 23, 43, -1, -1, 54, -1, -1, -1, 77};

  cout << "Before: " <<endl;
  print(vec2);

  vector<int> result = sortByHeight(vec2);

  cout << "After: " << endl;
  print(result);




  return EXIT_SUCCESS;
}