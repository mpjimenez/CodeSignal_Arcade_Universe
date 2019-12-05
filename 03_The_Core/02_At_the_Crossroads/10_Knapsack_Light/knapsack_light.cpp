#include <iostream>
using namespace std;

int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
  cout << "maxW: " << maxW << endl;
  cout << weight1 + weight2 << endl;
  if (maxW < (weight1 + weight2)) {
    cout << "Booty time!" << endl;
    return value1 + value2;
  }
  else {
    if (weight1 < maxW && weight2 < maxW) {
      if (value1 > value2)
        return value1;
      else 
        return value2;
    }
    
  }
  return -1;
}

int main() {

  int booty {0};
  int value1 {10};
  int weight1 {5};
  int value2 {6};
  int weight2{4};
  int maxW {8};

  booty = knapsackLight(value1, weight1, value2, weight2, maxW);
  cout << "The max value you can bring back is: " << booty << endl;

  return EXIT_SUCCESS;
}