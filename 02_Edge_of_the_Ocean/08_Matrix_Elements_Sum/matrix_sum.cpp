#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> matrix) {
  cout << "Matrix:" << endl;
  for (auto val : matrix) {
    for (auto num : val) {
      cout << num << " ";
    }
    cout << endl;
  }
  cout << "=--------------------------" << endl;
}

int matrixElementSum(vector<vector<int>> mat) {
  int sum{0};

  for (int row = 0; row < mat.size(); row++) {
    for (int col = 0; col < mat[row].size(); col++) {
      if (mat[row][col] != 0 && row == 0)
        sum += mat[row][col];
      else if (mat[row][col] != 0 && mat[row - 1][col] != 0 && mat[0][col] != 0)
        sum += mat[row][col];
    }
  }
  return sum;
}

int main() {
  int sum {0};
  vector<vector<int>> matrix1 {
    {0, 1, 1, 2},
    {0, 5, 0, 0},
    {2, 0, 3, 3}
  };

  vector<vector<int>> matrix2 {
    {1, 1, 1, 0},
    {0, 5, 0, 1},
    {2, 1, 3, 10}
  };

  sum = matrixElementSum(matrix2);
  cout << "The sum: " << sum << endl;

  return EXIT_SUCCESS;
}