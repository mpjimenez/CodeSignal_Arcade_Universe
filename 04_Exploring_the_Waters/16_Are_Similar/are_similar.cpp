#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> a, vector<int> b) {
  cout << "First Vector:" << endl;
  for (auto val : a) 
    cout << val << " ";
  cout << endl;

  cout << "Second Vector:" << endl;
  for (auto val : b)
    cout << val << " ";
  cout << endl;
  cout << "-------------------------" << endl;
}

bool areSimilar(vector<int> a, vector<int> b) {
  int count {0};
  cout << "beginning: " << count << " " << endl;
  for (int ndx = 0; ndx < a.size(); ndx++) {
    
    if (a[ndx] == b[ndx]) {
      count += 1; 
      cout << "Same: " << count << endl;
    }
            
    else {
      for (int i = ndx + 1; i < a.size(); i++) {

        if (a[ndx] != b[i] && b[ndx] != a[i] && a[i] != b[i])
          return false;
                
        else if (a[ndx] == b[i] && b[ndx] == a[i]) {
          count = i + 1;
          ndx = i - 1;
          cout << "i: " << i << "  count: " << count << endl; 
          break;
        }
      } 
    }
  }
    
  if (count == a.size())
    return true;
  else 
    return false;
}

int main() {
  bool result;
  // vector<int> a {1, 2, 3}; // should be true
  // vector<int> b {2, 1, 3};

  // vector<int> a {2, 3, 9}; // should be false
  // vector<int> b {10, 3, 2};

  vector<int> a {2, 3, 1}; // Other: should be true
  vector<int> b {1, 3, 2};

  vector<int> c {1, 2, 2};
  vector<int> d {2, 1, 1};

  vector<int> e {832, 998, 148, 570, 533, 561, 894, 147, 455, 279};
  vector<int> f {832, 998, 148, 570, 533, 561, 455, 147, 894, 279};

  print(e, f);

  if(areSimilar(e, f))
    cout << "The arrays are similar!" << endl;
  else
    cout << "The arrays are not similar!" << endl;

  return EXIT_SUCCESS;

}