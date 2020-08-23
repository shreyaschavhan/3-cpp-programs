// Day 023 - 22nd August 2020
// ================================================
// 3.  Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.
// Sample Output:
// Input the value for nth term: 5
// 1/1^1 = 1
// 1/2^2 = 0.25
// 1/3^3 = 0.037037
// 1/4^4 = 0.00390625
// 1/5^5 = 0.00032
// The sum of the above series is: 1.29126

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, i;
  double sum = 0, m;
  cout << "Enter the value for nth tern: ";
  cin >> n;
  cout << "\nThe sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/" << n << "^" << n << " :";
  for (i = 1; i <= n; i++){
    double m = 1/pow(i, i);
    sum = sum + m;
  }
  cout << " " << sum;
  return 0;
}
