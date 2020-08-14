// Day 015 - 14th August 2020
// =========================================================
//
// concept : if elses statements...
//
// 2. Write a program that accepts three numbers from the user and prints "increasing" if the numbers are in increasing order,
//  "decreasing" if the numbers are in decreasing order, and "Neither increasing or decreasing order"
//   otherwise.

#include <iostream>
using namespace std;

int numbers(int a, int b, int c){
  if (c > b && b > a){
    cout << "Increasing!" << endl;
  }
  else if ( a > b && b > c){
    cout << "Decreasing!" << endl;
  }
  else{
    cout << "Neither Increasing nor Decreasing!" << endl;
  }
}

int main(){
  int num1, num2, num3;
  cout << "Enter number 1, number2, number3 respectively: " << endl;
  cin >> num1 >> num2 >> num3;
  numbers(num1, num2, num3);
  return 0;
}
