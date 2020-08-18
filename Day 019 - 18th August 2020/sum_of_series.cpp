// Day 019 - 18th August 2020
// ===============================================
//
// (Note: Solve using For-loop - compulsory)
//
// 3. Write a program to find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include <iostream>
using namespace std;

int main(){
  int n, sum = 0;
  cout << "Enter the value of n: ";
  cin >> n;
  cout << "The sum of the series (1*1) + (2*2) + (3*3) + ............ + (" << n << "*" << n << ") : ";
  for(int i = 1; i <= n; i++ ){
    sum += i*i;
  }
  cout << sum << endl;
  return 0;
}
