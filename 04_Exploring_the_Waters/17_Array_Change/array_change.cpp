#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> a) {
  cout << "[ ";
  for (auto val : a)
    cout << val << " ";
  cout << "]" << endl;
}

int main() {

  vector<int> a {1, 1, 1}; // answer: 3
  vector<int> b {-1000, 0, -2, 0}; // answer: 5

  print(b);

  return EXIT_SUCCESS;
}