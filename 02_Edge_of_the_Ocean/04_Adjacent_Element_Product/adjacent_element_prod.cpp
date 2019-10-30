#include <iostream>
#include <vector>
using namespace std;

int adjacentElementsProduct(vector<int> inputArray) {
  int low {0};
  int high {1};
  int prod {-100000};

  while (low < high && high < inputArray.size()) {
    if (inputArray[low] * inputArray[high] > prod)
      prod = inputArray[low] * inputArray[high];
    low +=1;
    high +=1;
  }
  return prod;
}

int main() {

  vector<int> vec {3, 6, -2, -5, 7, 3};
  int product {0};

  product = adjacentElementsProduct(vec);
  cout << "Product: " << product << endl;



  return EXIT_SUCCESS;
}