#include<iostream>
#include <string>
using namespace std;
#define ZERO 48

void printBoard() {
  for (int row = 0; row < 8; row++) {
    for (int col = 0; col < 8; col++ ) {
      if (row == 0 || row == 2 || row == 4 || row == 6) {
        if (col % 2 == 0)
          cout << "W" << " ";
        else 
          cout << "B" << " ";
      }
      if (row == 1 || row == 3 || row == 5 || row == 7) {
        if (col % 2 == 0)
          cout << "B" << " ";
        else 
          cout << "W" << " ";
      }
    }
    cout << endl;
  }
}

char getColor(char piece[]) {
    char color;
   /* 
    col A, C, E, G == black
      - if (8 - row % 2 == 0) --> white
    col B, D, F, H == white
      - if (8 - row % 2 == 0) --> black

  */
  for (int x = 0; x < 2; x++) {
    if (piece[0] == 'A' || piece[0] == 'C' || piece[0] == 'E' || piece[0] == 'G') {
      if ((8 - (piece[1] - ZERO)) % 2 == 0)
        color = 'W';
      else
        color = 'B';
    }
    else if (piece[0] == 'B' || piece[0] == 'D' || piece[0] == 'F' || piece[0] == 'H') {
      if ((8 - (piece[1] - ZERO)) % 2 == 0)
        color = 'B';
      else
        color  = 'W';
    }
    return color;

  }
  

  return 'A';
}

bool chessBoardColor(string cell1, string cell2) {
  char c1[2];
  char c2[2];
  char color1;
  char color2;
  for (int ndx = 0; ndx < cell1.length(); ndx++) {
    c1[ndx] = cell1[ndx];
    c2[ndx] = cell2[ndx];
  }

  // cout << "piece 1: " << getColor(c1) << endl;
  // cout << "piece 2: " << getColor(c2) << endl;
  color1 = getColor(c1);
  color2 = getColor(c2);
  if (color1 == color2)
    return true;
  else 
    return false;
  
 
  return true;
}

int main() {
  string string1 {"A1"}; // output should be true
  string string2 {"C3"};
  

  string string3 {"A1"}; // output should be false;
  string string4 {"H3"};
  
  //printBoard();
  chessBoardColor(string3, string4);


  return EXIT_SUCCESS;
}