#include <iostream>
#include <vector>
using namespace std;

int seatsInTheater(int nCols, int nRows, int col, int row) {
  int numPeopleBehind {0};
  int peopleToRight {0};

  numPeopleBehind = (nRows - row) * nCols;
  peopleToRight = (col - 1) * (nRows - row);

  cout << "Total number of people behind you is: " << numPeopleBehind << endl;
  cout << "The total number of people to your right is: " << peopleToRight << endl;

  return numPeopleBehind - peopleToRight;

}

int main() {
  int nCols {16};
  int nRows {11};
  int col {5};
  int row {3};
  int result {0};

  result = seatsInTheater(nCols, nRows, col, row);

  cout << "The number of people you'll disturb is: " << result << endl;



  return EXIT_SUCCESS;
}