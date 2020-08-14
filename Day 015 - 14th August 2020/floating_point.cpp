// Day 015 - 14th August 2020
// =========================================================
//
// concept : if elses statements...
//
// 3. Write a program that accepts two floating­point numbers and checks whether they are the same up to two decimal places.
//
// Example:
//
// num1 = 25.585 ----> (25.58 - upto 2 decimals)
// num2 = 25.589 ----> (25.58 - upto 2 decimals)
// Therefore, both numbers are same!

#include <iostream>
using namespace std;

void floating_point(double num1, doublel num2){
  if (num1 > num2 && (num1-num2) > 0.01){
    cout << "Both numbers are same!" << endl;
  }
  elif (num2 > num1 && (num2-num1) > 0.01){
    cout << "Both numbers are same!" << endl;
  }
  else {
    cout << "Both numbers are Different!" << endl;
  }
}


int main(){
  double n1, double n2;
  cout << "Enter num1: ";
  cin >> n1;
  cout << endl<< "Enter num2: ";
  cin >> n2;
  cout << endl;
  floating_point(n1, n2);
  return 0;
}
