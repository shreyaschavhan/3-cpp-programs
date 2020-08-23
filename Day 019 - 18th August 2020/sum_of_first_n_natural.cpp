
// Day 019 - 18th August 2020
// ===============================================
//
// (Note: Solve using For-loop - compulsory)
//
// 1. Write a program to print the first 10 natural numbers.
// Sample Output:
// 1 2 3 4 5 6 7 8 9 10
// -------------------------------------------------
//
// 2. Modify the above program to find the sum of first n natural numbers using for loops.
// Sample output:
// Enter the value of n: 10
// The first 10 natural numbers are:
// 1 2 3 4 5 6 7 8 9 10
// The sum of first 10 natural numbers: 55
// ------------------------------------------------

#include <iostream>
using namespace std;

int main(){
  int n, sum = 0;
  cout << "The value of n: ";
  cin >> n;
  cout << endl;
  cout << "The first " << n << " natural numbers are: ";
  for(int i=1; i <= n; i++){
    cout << i << ' ' ;
    sum += i;
  }
  cout << endl;
  cout << "Sum of First " << n << " natural numbers: " << sum << endl;
  return 0;
}
