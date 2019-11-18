#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void print(vector<int> a) {
  cout << "[ ";
  for (auto val : a)
    cout << val << " ";
  cout << "]" << endl;
}

void showqueue(queue <int> s) { 
  while (!s.empty()) { 
    cout << " " << s.front(); 
    s.pop(); 
  } 
  cout << '\n'; 
} 

int arrayChange(vector<int> inputArray) {
  // int count {0};
  // queue<int> q;

  // q.push(inputArray[0]); // put first element into queue
  // cout << "First element" << q.front() << endl;
  // for (int ndx = 1; ndx < inputArray.size(); ndx++) {
  //   int temp = inputArray[ndx];
  //   cout << "q.front(): " << q.front() << " Temp: " << temp << " Count: "<< count << endl;

  //   while (temp <= q.front()) {
  //     count ++;
  //     temp++;
  //     cout << "Count: " << count << " temp: " << temp << endl;
  //   }
  //   cout << "------------------------------" << endl;
  //   inputArray[ndx] = temp;
  //   q.pop();
  //   q.push(inputArray[ndx]);
  // }

  
    int ma = -1e6;
    int ans = 0;
    
    for(int i : inputArray) {
      cout << "====  " << ma << "  ====" << endl;
      ma = max(ma + 1, i);
      ans += ma - i;
      cout << "ma: " << ma << " ans: " << ans << endl;
      cout << "---------------------------" << endl;
    }
    return ans;




  //return count;



}

int main() {

  vector<int> a {1, 1, 1}; // answer: 3
  vector<int> b {-1000, 0, -2, 0}; // answer: 5
  vector<int> c {2, 1, 10, 1}; //answer: 12
  int count {0};

  print(b);
  count = arrayChange(b);
  cout << "The result: " << count << endl;

  
  return EXIT_SUCCESS;
}