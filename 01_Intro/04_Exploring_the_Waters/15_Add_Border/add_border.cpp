#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<string>> vec) {
  for (auto row : vec) {
    for (auto val : row)
      cout << val;
    cout <<endl;
  }
  cout << endl;
}

void addStars(vector<vector<string>> &vec) {
  vector<string> stars{};
  for (int row = 0; row < vec.size(); row++) {
    for (int col = 0; col < vec[row].size(); col++) {
      string temp{};
      temp.append("*");
      temp.append(vec[row][col]);
      temp.append("*");
      vec[row] = {temp};
    }
  }

  for (int x = 0; x < vec[0][0].size(); x++) 
    stars.push_back("*");

 vec.insert(vec.begin(), stars);
 vec.insert(vec.end(), stars);
 
}

int main() {
  vector<vector<string>> picture1 {
    {"abc"}, 
    {"ded"}
  };

  vector<vector<string>> picture2 {
    {"abcde"}, 
    {"fghij"}, 
    {"klmno"}, 
    {"pqrst"}, 
    {"uvwxy"}
  };

  addStars(picture1);
  print(picture1);


  return EXIT_SUCCESS;
}