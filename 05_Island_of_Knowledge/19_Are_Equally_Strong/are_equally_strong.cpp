#include <iostream>

using namespace std;

bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
  bool strength {false};
  if (yourLeft == friendsLeft || yourLeft == friendsRight) {
    if (yourRight == friendsLeft || yourRight == friendsRight) {
      strength = true;
    }
  }
  
  return strength;
}

int main() {

// int yourLeft {15};
// int yourRight {10};
// int friendsLeft {15};
// int friendsRight {9};

int yourLeft {15};
int yourRight {10};
int friendsLeft {15};
int friendsRight {10};
bool result;

result = areEquallyStrong(yourLeft, yourRight, friendsLeft, friendsRight);

if (result)
  cout << "Strengths ARE equal" << endl;
else 
  cout << "Strengs ARE NOT equal" << endl;


  return EXIT_SUCCESS;
}