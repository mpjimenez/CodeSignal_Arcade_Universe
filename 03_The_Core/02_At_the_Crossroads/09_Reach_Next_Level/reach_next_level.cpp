#include <iostream>
using namespace std;

bool reachNextLevel(int experience, int threshold, int reward) {
  
  if (experience + reward >= threshold)
    return true;
  
  return false;
}


int main() {
  int experience {10};
  int threshold {15};
  int reward {5};
  
  if (reachNextLevel(experience, threshold, reward))
    cout << "You've made it to the next level!!" << endl;
  else 
    cout << "You do not have enough experience to move to next level!!" << endl;


  return EXIT_SUCCESS;
}