
// 3. Write a program to find the sum of the first n positive integers.
// ==================================================
// Hint: Use formula
// Sample output:
// n = 8
// sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36
// ==================================================

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n, sum, numerator;
  cout << "Enter the value of n: ";
  cin >> n;
  numerator = n * (n + 1);
  sum = numerator/2;
  cout << "The sum of first n postive intergers: " << sum;
}
