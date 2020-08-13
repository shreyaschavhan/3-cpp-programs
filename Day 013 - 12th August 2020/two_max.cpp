
// Day 013 - 12th August 2020
// ==========================================
//
//
// (Note: solve every question using function)
//
// 1. Write a program to find maximum number between two numbers.


#include <iostream>
using namespace std;

void two_max(int num1, int num2){
  if(num1 > num2){
    cout << "Maximum: " << num1 << endl;
    cout << "Minimum: " << num2 << endl;
  }
  else if(num2 > num1){
    cout << "Maximum: " << num2 << endl;
    cout << "Minimum: " << num1 << endl;
  }
  else{
    cout << "Both numbers are equal.";
  }
}
int main(){
  int n1, n2;
  cout << "Enter number1: ";
  cin >> n1;
  cout << "Enter number2: ";
  cin >> n2;
  two_max(n1, n2);
  return 0;
}
