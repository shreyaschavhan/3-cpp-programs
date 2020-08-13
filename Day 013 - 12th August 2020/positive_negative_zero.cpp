
// Day 013 - 12th August 2020
// ==========================================
//
//
// (Note: solve every question using function)
//
// 3. Write a program to check whether a number is negative, positive or zero

#include <iostream>
using namespace std;

void positiveNegativeZero(int num){
  if (num > 0){
    cout << num << " is a positive number."<< endl;
  }
  else if (num < 0){
    cout << num << " is a negative number."<< endl;
  }
  else{
    cout << "The number is zero." << endl;
  }
}

int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << endl;
  positiveNegativeZero(n);
  return 0;
}
