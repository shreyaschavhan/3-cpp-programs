// Day 025 - 24th August 2020
// ==========================================
//
// Revision Question: [Till we restart our discussion back]
// -----------------------------------
//
// 2. Write a program to input angles of a triangle and check whether triangle is valid
// or not.
// Hint: Sum of Angles of triangle = 180;

#include <iostream>
using namespace std;

int main(){
  int a1, a2, a3;
  cout << "Enter angle1, angle2, angle3: ";
  cin >> a1 >> a2 >> a3;
  if (a1 == 180 || a2 == 180 || a3 == 180 || a1 == 0 || a2 == 0 || a3 == 0){
    cout << "Invalid input\n";
  }
  else if (a1 + a2 + a3 == 180){
    cout << "\nValid Triangle\n";
  }
  else{
    cout << "Invalid Triangle\n";
  }
  return 0;
}
