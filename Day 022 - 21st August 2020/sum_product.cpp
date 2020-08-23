// Day 022 - 21st August 2020
// ==================================================================
// 2. Write a program that asks the user for a number n and gives them the possibility to choose between
// computing the sum and computing the product of 1,…,n.
//
// Example: n = 10
// Do you want to perform sum or product?
// if sum ...... do addition of digits from 1 to 10
// if product ........... do multiplication of digits from 1 to 10
// =================================================================

#include <iostream>
using namespace std;

int main(){
  int n, sum = 0, operation;
  int product = 1;
  cout << "Enter n: ";
  cin >> n;
  cout << endl;
  for(int i = 1; i <= n; i++){
    sum += i;
    product = product * i;
  }
  cout << "what do you want to do>: "<< endl;
  cout << "1. Sum" << endl;
  cout << "2. Product" << endl;
  while (true){
    cout << "Enter 1 or 2: ";
    cin >> operation;
    if (operation == 1){
      cout << "Sum of numbers from 1 to " << n << " : " << sum << endl;
      break;
    }
    else if (operation == 2){
      cout << "Product of numbers from 1 to " << n << " : " << product << endl;
      break;
    }
    else{
      continue;
    }
  }
  return 0;
}
