#include <iostream>
#include <vector>
using namespace std;

vector<int> metroCard(int lastNumberOfDays) {
  vector<int> result;
    if (lastNumberOfDays == 28)
        result.push_back(31);
    
    else if (lastNumberOfDays == 30) {
        result.push_back(31);
    }
    else {
        result.push_back(28);
        result.push_back(30);
        result.push_back(31);
    }
    return result;

}

int main() {
  int lastNumberOfDays {30};
  vector<int> result;

  result = metroCard(lastNumberOfDays);

  cout << "The possible number of days for which you will extend your pass are: " << endl;
  for (auto val : result)
    cout << val << " ";
  cout << endl;



  return EXIT_SUCCESS;
}