// Day 022 - 21st August 2020
// ==================================================================
//
// 1. Write a program that asks the user for a number n and prints the sum of the numbers 1 to n
// Modify the previous program such that only multiples of three or five are considered in the sum, e.g. 3, 5, 6, 9, 10, 12, 15 for n=17


#include <iostream>
using namespace std;

int main(){
  int n, sum = 0;
  cout << "Enter n: ";
  cin >> n;
  for(int i = 1; i <= n; i++){
    if (i % 3 == 0 || i % 5 == 0){
        sum += i;
    }
  }
  cout << "Sum: " << sum << endl;
  return 0;
}
