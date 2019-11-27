#include <iostream>
#include <string>

using namespace std;

int largestNumber(int n) {
  string str {""};

  for (int x = 0; x < n; x++) 
    str += "9";
  
  return stoi(str);
}

int main() {
  int n {4};
  int result {0};
  result = largestNumber(n);

  cout << "The largest number with " << n << " digits is: " << result << endl;



  return EXIT_SUCCESS;
}