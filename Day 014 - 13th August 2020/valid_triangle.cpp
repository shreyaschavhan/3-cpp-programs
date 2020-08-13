// Day 014 - 13th August 2020
// ================================================
//
// [Note - Solve using Functions]
// Concept - If-Else statements.......
//
// 2. Write a program to angles of a triangle and check whether triangle is valid
// or not.
// Hint: Sum of Angles of triangle = 180;

#include <iostream>
using namespace std;

void validTriangle(int a1, int a2, int a3){
  if ((a1 + a2 + a3) == 180){
    cout << "The triangle is valid." << endl;
  }
  else{
    cout << "OOPs! It's not a triangle." << endl;
  }
}


int main(){
  int angle1, angle2, angle3;
  cout << "Enter angle 1: ";
  cin >> angle1;
  cout << "\nEnter angle 2: ";
  cin >> angle2;
  cout << "\nEnter angle 3: ";
  cin >> angle3;
  validTriangle(angle1, angle2, angle3);
  return 0;
}
