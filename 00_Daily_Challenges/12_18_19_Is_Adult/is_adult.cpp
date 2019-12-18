#include <iostream>
using namespace std;


bool isAdult(int age, int adulthoodAge){
  return (age >= adulthoodAge);
}



int main(int argc, char** argv) {
  int age{18}, adulthood(25);

  if (isAdult(age, adulthood))
    cout << "This person IS considered an adult!" << endl;
  else 
    cout << "This person IS NOT considered an adult!" << endl;
  return EXIT_SUCCESS;
}