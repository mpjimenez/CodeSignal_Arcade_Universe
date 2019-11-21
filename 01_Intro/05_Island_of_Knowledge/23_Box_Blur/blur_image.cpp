#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> image) {
  for (int row = 0; row < image.size(); row ++) {
    for (int col = 0; col < image[row].size(); col ++) {
      cout << image[row][col] << " ";
    }
    cout << endl;
  }
  cout << "--------------------------" << endl;
}

vector<vector<int>> getDimensions(vector<vector<int>> image) {
  int size_of_row {0}; // the number of columns
  int size_of_col {0}; // the numbe of rows

  for (int row = 0; row < image.size(); row++) {
    if (image.size() - row >= 3)
        size_of_row++;
    for (int col = 0; col < image[row].size(); col++) {
      if (image.size() - row >= 3 && image[row].size() - col >= 3) {
        size_of_col++;
      }
    }
  }

  size_of_col /= size_of_row;
  vector<vector<int>> blurred (size_of_row, vector<int> (size_of_col, -1));
  cout << "number of rows: " << blurred.size() << endl;
  cout << "number of cols: " << blurred[0].size() << endl;
  print(blurred);
  return blurred;
}

vector<vector<int>> boxBlur(vector<vector<int>> image) {
  int k {3}; // size of submatrix
  vector<vector<int>> blurred = getDimensions(image);
  
  for (int row = 0; row < image.size() - k + 1; row++) {
    for (int col = 0; col < image[row].size() - k + 1;  col++) {
      int sum {0};
      for (int x = row; x < k + row; x++) {
        for (int y = col; y < k + col; y++) {
          sum += image[x][y];
        }
      }
      sum /= 9;
      blurred[row][col] = sum;
    }
  }
  return blurred;
}

int main() {
  vector<vector<int>> image1 {{1, 1, 1}, 
                              {1, 7, 1},
                              {1, 1, 1}}; // should return [[1]]

  vector<vector<int>> image2 {{7, 4, 0, 1},
                              {5, 6, 2, 2},
                              {6, 10, 7, 8},
                              {1, 4, 2, 0}}; // should return [[5, 4],
                                             //                [4, 4]]
  
  vector<vector<int>> image3 {{36, 0, 18, 9},
                              {27, 54, 9, 0},
                              {81, 63, 72, 45}};  // should return [[40, 30]]

  vector<vector<int>> image4 {{36, 0, 18, 9, 9, 45, 27},    
                              {27, 0, 54, 9, 0, 63, 90},
                              {81, 63, 72, 45, 18, 27, 0},
                              {0, 0, 9, 81, 27, 18, 45},
                              {45, 45, 27, 27, 90, 81, 72},
                              {45, 18, 9, 0, 9, 18, 45},
                              {27, 81, 36, 63, 63, 72, 81}};

  /*
    expected output:
    {{39, 30, 26, 25, 31},
     {34, 37, 35, 32, 32},
     {38, 41, 44, 46, 42},
     {22, 24, 31, 39, 45},
     {37, 34, 36, 47, 59}};
  */

  vector<vector<int>> image5 {{172,14,85,186,28,155,122,39,44}, 
                              {71,215,117,16,56,107,126,114,214}, 
                              {83,173,135,218,151,200,133,58,8}, 
                              {249,119,57,134,255,70,82,238,37}, 
                              {199,76,110,36,121,185,187,82,92}, 
                              {106,231,120,126,41,205,203,57,185}, 
                              {246,241,81,146,148,46,16,128,233}};

  /*
    expected output:
    {{118,128,110,124,119,117,95}, 
    {135,131,126,134,131,125,112}, 
    {133,117,135,152,153,137,101}, 
    {140,112,111,130,149,145,129}, 
    {156,129,103,117,128,123,131}};
  
  */


  // cout << "Unblurred image" << endl;
  // print(image1);
  // cout << "image1.size() == number of rows: " << image1.size() << endl;
  // cout << "image1[0].size() == number of columns " << image1[0].size() << endl << endl;
  // vector<vector<int>> blurred = boxBlur(image1);
  // cout << "Blurred Image:" << endl;
  // print(blurred);

  // cout << "Unblurred image" << endl;
  // print(image2);
  // cout << "image2.size() == number of rows: " << image2.size() << endl;
  // cout << "image2[0].size() == number of columns " << image2[0].size() << endl << endl;
  // vector<vector<int>> blurred = boxBlur(image2);
  // cout << "Blurred Image:" << endl;
  // print(blurred);


  // cout << "Unblurred image" << endl;
  // print(image3);
  // cout << "image3.size() == number of rows: " << image3.size() << endl;
  // cout << "image3[0].size() == number of columns " << image3[0].size() << endl << endl;
  // vector<vector<int>> blurred = boxBlur(image3);
  // cout << "Blurred Image:" << endl;
  // print(blurred);


  // cout << "Unblurred image" << endl;
  // print(image4);
  // cout << "image4.size() == number of rows: " << image4.size() << endl;
  // cout << "image4[0].size() == number of columns " << image4[0].size() << endl << endl;
  // vector<vector<int>> blurred = boxBlur(image4);
  // cout << "Blurred Image:" << endl;
  // print(blurred);

  cout << "Unblurred image" << endl;
  print(image5);
  cout << "image5.size() == number of rows: " << image5.size() << endl;
  cout << "image5[0].size() == number of columns " << image5[0].size() << endl << endl;
  vector<vector<int>> blurred = boxBlur(image5);
  cout << "Blurred Image:" << endl;
  print(blurred);


  return EXIT_SUCCESS;
}