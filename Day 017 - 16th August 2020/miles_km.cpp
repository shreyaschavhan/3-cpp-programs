// Day 017 - 16th August 2020
// ================================================
//
// 1. Write a program in C++ that converts from miles to kilometers.
// Your program should have a reasonable prompt for the user to enter
// a number of miles.
// Hint : 1 miles = 1.609 kilometers.
//
// -----------------------------------

#include <iostream>
using namespace std;

int main(){
  float miles, kilometers;
  cout << "Enter the number of miles: ";
  cin >> miles;
  kilometers = 1.609 * miles;
  cout << miles << " miles is equal to " << kilometers << " Kilometers." << endl;
  return 0;
}
