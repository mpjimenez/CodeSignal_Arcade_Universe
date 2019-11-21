#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> vec) {
  for (auto val : vec)
    cout << val << " ";
  cout << endl;
}

vector<int> getSums(vector<int> weights) {
  vector<int> results{};
  int sum1{0}, sum2{0};
  for (size_t x = 0; x < weights.size(); x++) {
    if (x % 2 == 0) {
      sum1 += weights[x];
    }
    else sum2 += weights[x];
  }

  results.push_back(sum1);
  results.push_back(sum2);
  return results;
}

int main() {
  vector<int> a  {50, 60, 60, 45, 70}; // result should be {180, 105} 
  vector<int> results {};

  results = getSums(a);

  print(a);
  print(results);





  return EXIT_SUCCESS;
}