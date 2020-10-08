#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

double calculateTime(vector<double> a, vector<double> mid, vector<double> b, double v1, double v2) {
  return (sqrt(pow((mid[0] - a[0]), 2) + pow((mid[1] - a[1]), 2))) / v1 +  (sqrt(pow((b[0] - mid[0]), 2) + pow((b[1] - mid[1]), 2))) / v2;
}

double armyMarch(vector<double> a, vector<double> b, double v1, double v2) {
  vector<double> mid {0, 1.31899};

  // point b is in quadrant I (+, +)
  if (b[1] < 0) { 
    if (a[1] < 0) { // point a is in quadrant II
      
    }
    else { // point a is in quadrant III

    }

  }

  // point b is in quadrant IV (+, -)
  else {
    if (a[1] < 0) { // point a is in quadrant II

    }
    else { // point a is in quadrant III

    }
  }

  
  return calculateTime(a, mid, b, v1, v2);

}


int main() {

  vector<double> a {-1.5, 0.5};
  vector<double> b {1.5, 1.5};
  double v1 = 4.4;
  double v2 = 1.1;
  double time {0.0};

  cout << "Daily Challenge: Army March\n\n";
  //cout << "Optimal route is (-1.5, 0.5) --> (0, 1.31899) --> (1.5, 1.5)\n";
  
  cout << "The shortest possible travel time is: ";
  cout << armyMarch(a, b, v1, v2) << endl;
  return 0;
}