// day 11 - 10th August 2020
// =========================================================
//
// 2. Calculate the sum of digits of a number given by user. E.g.-
//    INPUT : 123        OUTPUT : 1 + 2 + 3 = 6
//    INPUT : 12345      OUTPUT : 1 + 2 + 3 + 4 + 5 = 15
//
// Hint = Same logic as Armstrong number wala program!
// =========================================================

#include <iostream>
using namespace std;

int main(){
  int number, remainder, sum = 0;
  cout << "Enter a number: ";
  cin >> number;
  int duplicate = number;
  cout << endl;
  while(number > 0){
    remainder = number % 10;
    sum += remainder;
    number = number / 10;
  }
  cout << "Sum of digits of " << duplicate << " = " << sum << endl;
  return 0;
}
