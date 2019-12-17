#include <iostream>
using namespace std;

int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
 
  if (maxW >= (weight1 + weight2)) {
    cout << "Booty time!" << endl;
    return value1 + value2;
  }
  else {
    if (weight1 <= maxW && weight2 <= maxW)
      if (value1 > value2)
        return value1;
      else 
        return value2;

    else if (weight1 > maxW && weight2 <= maxW)
      return value2;

    else if (weight1 <= maxW && weight2 > maxW)
      return value1;
  }
  return 0;
}

int main() {

  int booty {0};
  int value1 {10};
  int weight1 {2};
  int value2 {11};
  int weight2{3};
  int maxW {1};

  booty = knapsackLight(value1, weight1, value2, weight2, maxW);
  cout << "The max value you can bring back is: " << booty << endl;

  return EXIT_SUCCESS;
}