#include <iostream>
#include <algorithm>
using namespace std;

int circleOfNumbers(int n, int firstNumber) {
  int maxDistance {n / 2};
  int arr[n];
  int size = sizeof(arr)/sizeof(arr[0]); // 10 for [0 , 1, 2, 3, 4, 5, 6,  7, 8, 9]
  int ndx {0};

  
  for (int x = 0; x < n; x++){
    arr[x] = x;
  }
  auto itr = find(arr, arr + size, firstNumber);
  ndx = distance(arr, itr);
  cout << "n: " << n << " firstNumber: " << firstNumber << endl;
  cout << "index of firstNumber: " << ndx << endl;
  for (auto val : arr)
    cout << val << " ";
  cout << endl << endl;

  if (ndx - maxDistance < 0) 
    return arr[size + (ndx - maxDistance)];
  else 
    return arr[ndx - maxDistance];
  
}

int main() {
  int n {10};
  int firstNumber {2};
  int result;

  result = circleOfNumbers(n, firstNumber);
  cout << "Result: " << result << endl;





  return EXIT_SUCCESS;
}