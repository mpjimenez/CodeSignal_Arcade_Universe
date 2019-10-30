#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> vec) {
  for (auto val : vec) 
    cout << val << " ";
  cout << endl;
}
int find_increasing(vector<int> s) {
  for (int ndx = 0; ndx < s.size() - 1; ndx++) {
    if (s[ndx] >= s[ndx + 1])
      return ndx;
  }
  return -1;
}

bool almost_increasing_sequence(vector<int> sequence) {
 int index {0};
  index = find_increasing(sequence);

  if (index < 0)
    return true;
  else {
    vector<int> temp1(sequence.begin(), sequence.end());
    vector<int> temp2(sequence.begin(), sequence.end());
    //check if removing element at index creates increasing sequence
    temp1.erase(temp1.begin() + index);
    if (find_increasing(temp1) == -1)
      return true;
    else {
      // check if removing element after index  creates increasing 
      temp2.erase(temp2.begin() + index + 1);
      if(find_increasing(temp2) == -1)
        return true;
    }
  }
  cout << endl;
  return false;
}

int main() {
  //vector<int> sequence {3, 5, 67, 98, 3};
  vector<int> sequence {1, 3, 2, 1};
  bool result;
  result = almost_increasing_sequence(sequence);
  cout << "Result: " << result << endl; 
  


  return EXIT_SUCCESS;
}