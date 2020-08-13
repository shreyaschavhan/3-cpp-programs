// ========================================
//
// 2. Write a program to compute the distance between the points (x1, y1) and (x2, y2).
// Hint:
// 1. Take two inputs
// 2. calculate the distance using distance formula
// 3. Display the result
//
// ==========================================


#include <iostream>
//#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
  int x1, x2, y1, y2;
  double under;
  cout << "Enter x1: " ;
  cin >> x1;
  cout << "Enter y1: " ;
  cin >> y1;
  cout << "Enter x2: " ;
  cin >> x2;
  cout << "Enter y2: " ;
  cin >> y2;
  under = (((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1)));
  double power = 0.5;
  //double distance = pow(under, power);
  double distance = sqrt(under);
  cout << "Distance : " << distance;
  cout << under;
  return 0;

}
