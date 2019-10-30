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

int matrix_element_sum(vector<vector<int>> mat) {
  int sum {0};
  for (int row = 0; row < mat.size(); row ++) {
    for (int col = 0; col < mat[row].size(); col++) {
      if(mat[row][col] == 0 && row != mat.size() - 1) {
        mat[row + 1][col] = 0;
      }
    }
  }

  for (auto val : mat) {
    for (auto num : val) {
      sum += num;
    }
  }
  return sum;
}

int main() {
  int sum {0};
  vector<vector<int>> matrix {
    {0, 1, 1, 2},
    {0, 5, 0, 0},
    {2, 0, 3, 3}
  };

  sum = matrix_element_sum(matrix);
  cout << "The sum: " << sum << endl;

  return EXIT_SUCCESS;
}