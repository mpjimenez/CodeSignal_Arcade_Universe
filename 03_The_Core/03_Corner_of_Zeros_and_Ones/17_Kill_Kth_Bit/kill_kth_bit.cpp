#include <iostream>
using namespace std;

int killKthBit(int n, int k) {

  return ((n & 1 << (k - 1)) ?  (n ^ (1 << (k - 1))) : n);
  
}

int main() {
  int n{37}, k{3};
  int result;

  result = killKthBit(n, k);

  cout << "The number prior to manipulation is: " << n << endl;
  cout << "After switching bit " << k <<" to zero, the number is now " << result << endl;

  return EXIT_SUCCESS;
}