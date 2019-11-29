#include <iostream>
using namespace std;


int phoneCall(int min1, int min2_10, int min11, int s) {
  int minutes {0};
  int time {9};

  if (min1 < s) {
    minutes++;
    s -= min1;
  }
  cout << "minutes: " << minutes << endl;
  cout << "cents after 1st min: " << s << endl;

  while (min2_10 <= s && time > 0) {
    minutes++;
    time--;
    s -= min2_10;
  }
  cout << "minutes: " << minutes << endl;
  cout << "cents remaining after 2 - 10 minutes: " << s << endl;

  if (time == 0) {
    while (min11 <= s) {
      minutes++;
      s -= min11;
    }
  }
  
  
  cout << "minutes: " << minutes << endl;
  cout << "cents remaining longest phone call: " << s << endl;

  return minutes;
}


int main() {
  int result {0};

  int min1 {3}; // should be 14 minutes
  int min2_10 {1};
  int min11 {2};
  int s {20};
  
  // int min1 {10}; // shold be 11 mintues
  // int min2_10 {1};
  // int min11 {2};
  // int s {22}

  result = phoneCall(min1, min2_10, min11, s);

  cout << "The longest phone call you can make is " << result << " minutes long!" << endl;

  return EXIT_SUCCESS;
}