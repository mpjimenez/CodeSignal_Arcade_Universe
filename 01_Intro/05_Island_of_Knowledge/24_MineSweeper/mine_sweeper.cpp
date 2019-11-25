#include <iostream>
#include <vector>
#include <stack>

using namespace std;

template<typename T>
void print(vector<vector<T>> mat) {
  for (auto row : mat) {
    for (auto val : row) {
      cout << val << " ";
    }
    cout << endl;
  }
}



vector<vector<int>> minesweeper(vector<vector<bool>> matrix) {
  int numRows = matrix.size();
  int numCols = matrix[0].size();
  vector<vector<int>> res (matrix.size(), vector<int> (matrix[0].size(), 0));

  for(int i = 0; i < numRows; ++i) {
    for(int j = 0; j < numCols; ++j) {
      for(int r = -1; r < 2; ++r)
        for(int c = -1; c < 2; ++c) {
          if(!(r|c)) continue; // r OR c == 0
          if(i + r >= 0 and i + r < numRows and j + c >= 0 and j + c < numCols && matrix[i + r][j + c])
            ++res[i][j];
        }
    }
  }
  return res;
}

int main() {
  vector<vector<int>> res;
  vector<vector<bool>> matrix1 {
                                {true, false, false},
                                {false, true, false},
                                {false, false, false}};
  /*
    Output should be:
    {{1, 2, 1},
    {2, 1, 1},
    {1, 1, 1}}
  */

 vector<vector<bool>> matrix2 {
                                {true,false,false,true}, 
                                {false,false,true,false}, 
                                {true,true,false,true}};

  /*
    Output should be:
    {{0,2,2,1}, 
     {3,4,3,3}, 
     {1,2,3,1}}
  */

  cout << "matrix[0].size() -- number of columns " << matrix2[0].size() << endl;
  cout << "matrix.size() -- number of row " << matrix2.size() << endl;
  cout << "oringial matrix:" << endl;
  print(matrix2);
  res = minesweeper(matrix2);
  cout << "Result:" << endl;
  print(res);

  return EXIT_SUCCESS;
}