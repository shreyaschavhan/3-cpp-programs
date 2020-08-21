// Day 021 - 20th August 2020
// ====================================================================
// ------------------------------------------------------------
// Note: (Solve using loops [for loop/ while loop (anyone)])
// ------------------------------------------------------------
// 1. Take 10 integers from keyboard using loop and print their mean value on the screen.

#include <iostream>
using namespace std;

int main(){
  int num, sum = 0;
  for(int i = 1; i <= 10 ; i++){
    cout <<"Enter "<< i <<"th number: ";
    cin >> num;
    sum += num;
  }
  cout << "The mean value of the 10 numbers: " << sum/10.0 << endl;
  return 0;
}
