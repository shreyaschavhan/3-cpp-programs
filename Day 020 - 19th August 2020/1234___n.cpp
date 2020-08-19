// Day 020 - 19th August 2020
// =====================================================
// 2. Write a program to print the following output:
// 123..............n {limit the n for constraint: 1 <= n <= 150, take the input from user
// for the value of n}
// Note: that "........." represents the consecutive values in between.
// Sample Input: n = 5
// Sample Output: Output: 12345
//
// ------------------------------------------------------

#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter the value of n: ";
  cin >> n;
  cout << "Output: ";
  for (int i = 1; i <=n; i++ ){
    cout << i;
  }
  return 0;
}
