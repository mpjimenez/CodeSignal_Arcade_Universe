#include <iostream>
#include <vector>
using namespace std;

vector<int> splitDigits(int n) {
  vector<int> vec{0};
  if (n < 0)
    n *= -1;
  else if (n == 0)
    return vec;
  else {
    while (n > 0)  {
      vec.insert(vec.begin(), n % 10);
      n /= 10;
    }
      
  }
  vec.pop_back(); 
  
  return vec;

}

bool isLucky(int n) {
  int firstHalf{0};
  int secondHalf{0};
  vector<int> vec; 
  
  vec = splitDigits(n);
  
  for (int x = 0; x < vec.size(); x++) {
    if (x < vec.size() / 2)
      firstHalf += vec[x];
    else
      secondHalf += vec[x];
  }

  // cout << "number: ";
  // for (auto val : vec)
  //   cout << val;
  // cout << endl;

  // cout << "firstHalf: " << firstHalf << endl;
  // cout << "secondHalf: " << secondHalf << endl;
  if (firstHalf == secondHalf)
    return true;
  else
    return false;
}

int main() {
  int ticket1 = 1230; // lucky
  int ticket2 = 239017; // not lucky


  if(isLucky(ticket2))
    cout << ticket2 << " is Lucky!" << endl;
  else
    cout << ticket2 << " is not lucky!" << endl;

  return EXIT_SUCCESS;
}