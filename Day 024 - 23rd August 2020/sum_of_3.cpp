// Day 024 - 23rd August 2020
// __________________________________
//
// Revision Questions
// -----------------------------
//
// 1. Write a program to sum of three given integers. However, if two values are equal it should output zero.
// Ex. if the three numbers are 1, 2, 3 (any different numbers), then print 1 + 2 + 3 = 6
// if the three numbers for example are 2, 1, 2, since two numbers are same, then print 0
//
// ===========================================================


#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  cout << "Enter a, b, c: ";
  cin >> a >> b >> c;
  if( a == b || b == c || a == c ){
    cout << "\nAnswer: " << 0;
  }
  else{
    cout << "\nSum: " << a + b + c;
  }
  return 0;
}
