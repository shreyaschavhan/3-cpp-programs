// Day 019 - 18th August 2020
// ===============================================
//
// (Note: Solve using For-loop - compulsory)
//
// 1. Write a program to print the first 10 natural numbers.
// Sample Output:
// 1 2 3 4 5 6 7 8 9 10
// -------------------------------------------------

#include <iostream>
using namespace std;

int main(){
  cout << "The first 10 natural numbers: "<< endl;
  for(int i=1; i <= 10; i++){
    cout << i << ' ' ;
  }
  return 0;
}
