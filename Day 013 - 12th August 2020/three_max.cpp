
// Day 013 - 12th August 2020
// ==========================================
//
//
// (Note: solve every question using function)
//
// 2. Write a program to find maximum between three numbers.

#include <iostream>
using namespace std;

void two_max(int num1, int num2, int num3){
  if(num1 > num2 && num1 > num3){
    cout << "Maximum: " << num1 << endl;
  }
  else if(num2 > num1 && num2 > num3){
    cout << "Maximum: " << num2 << endl;
  }
  else if (num3 > num1 && num3 > num2){
    cout << "Maximum: " << num3 << endl;
  }
  else{
    cout << "All numbers are equal.";
  }
}
int main(){
  int n1, n2, n3;
  cout << "Enter number1: ";
  cin >> n1;
  cout << "Enter number2: ";
  cin >> n2;
  cout << "Enter number3: ";
  cin >> n3;
  two_max(n1, n2, n3);
  return 0;
}
