#include <iostream>
using namespace std;


bool tennisSet(int score1, int score2) {
  if (score1 < 5 || score2 < 5) {
    if (score1 == 6 || score2 == 6)
      return true;
  }
  else if (score1 >= 5 || score2 >= 5) {
    if (score1 == 7 && score2 == 7)
      return false;
    else if (score1 == 7 && score2 < 7)
      return true;
    else if (score1 < 7 && score2 == 7)
      return true;
    
  }

  return false;
}

int main() {
  int score1{3}, score2{6};
  bool result;

  result = tennisSet(score1, score2);
  if (result)
    cout << "This IS a possible score for an ended set!" << endl;
  else 
    cout << "This IS NOT a possible score for an ended set!" << endl;


  return EXIT_SUCCESS;
}