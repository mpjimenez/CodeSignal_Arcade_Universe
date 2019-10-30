#include <iostream>
#include <vector>
#include <algorithm> // for the sort method
using namespace std;

void print(vector<int> vec) {
  cout << "{ ";
  for (auto val : vec)
    cout << val << " ";
  cout << "}" << endl;
}

int makeArrayConsecutive2(vector<int> statues) {
  int counter{0};

  sort(statues.begin(), statues.end());
  for (int x = 0; x < statues.size() - 1; x++) {
    if (statues[x] + 1 != statues[x + 1]) {
      if (statues[x] == 0)
        counter += statues[x + 1] - 1;
      else
        counter += statues[x + 1] - statues[x] - 1;
    }
  }

  return counter;
}

int main() {
  int result{0};
  vector<int> statues {6, 2, 3, 8};

  cout << "Staues: ";
  print(statues);

  result = makeArrayConsecutive2(statues);
  cout << "The number of statues needed: " << result << endl;


  return EXIT_SUCCESS;
}