// Day 025 - 24th August 2020
// ==========================================
//
// Revision Question: [Till we restart our discussion back]
// -----------------------------------
//
// 1. Write a program to get the volume of a sphere with radius 6.
//
// -----------------------------------

#include <iostream>
using namespace std;

int main(){
  int r;
  float vol;
  cout << "Enter the radius: ";
  cin >> r;
  vol = (4.0/3.0) * (22.0/7.0) * r * r * r ;
  cout << "Vol: " << vol;
  return 0;
}
