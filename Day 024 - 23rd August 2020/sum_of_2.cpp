// Day 024 - 23rd August 2020
// __________________________________
//
// Revision Questions
// -----------------------------
//
// 2. Write a program to sum of two given integers. However, if the sum is between 15 to 20 it should return 20.
// Ex. a) 10 + 6 = 16 | since the sum is in between 15 - 20, print 20
// b) 10 + 12 = 22 | print 22 (since not in between 15 - 20)
//
// ===========================================================

#include <iostream>
using namespace std;

int main(){
  int a, b;
  cout << "Enter a , b: ";
  cin >> a >> b;
  int sum = a + b;
  if (sum >= 15 && sum <= 20){
    cout << "\nReturn: " << 20;
  }
  else{
    cout << "Sum: " << sum;
  }
  return 0;
}
