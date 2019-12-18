#include <iostream>
#include <vector>
using namespace std;

int arrayPacking(vector<int> a) {
  int result {0};

  for (int ndx = 0; ndx < a.size(); ndx++) 
    result += a[ndx] << 8 * ndx;
  
  return result;
}

int main(int argc, char** argv) {
  vector<int> a {24, 85, 0}; // [00011000, 01010101, 00000000] in binary
  int result {0}; // should be 00000000 01010101 00011000 or 21,784
  
  vector<int> a1 {23, 45, 39}; // [0010111, 00101101, 00100111 ] in binary
  int result1 {0}; // should be 00100111 00101101 00010111 or 2,567,447
  
  result = arrayPacking(a1);
  cout << "The result of packing vector { ";
  for (auto val : a1)
    cout << val << " ";
  cout << "} is ";
  cout << result << endl;

  return EXIT_SUCCESS;
}