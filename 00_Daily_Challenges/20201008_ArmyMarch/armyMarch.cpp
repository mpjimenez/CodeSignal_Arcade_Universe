#include<iostream>
#include<vector>
using namespace std;


double armyMarch(vector<double> a, vector<double> b, double v1, double v2) {
  


  return 0.0;
}

int main() {

  vector<double> a {-1.5, 0.5};
  vector<double> b {1.5, 1.5};
  double v1 = 4.4;
  double v2 = 1.1;

  cout << "Daily Challenge: Army March\n\n";
  //cout << "Optimal route is (-1.5, 0.5) --> (0, 1.31899) --> (1.5, 1.5)\n";
  
  cout << "The shortest possible travel time is: ";
  cout << armyMarch(a, b, v1, v2) << endl;

  return 0;
}