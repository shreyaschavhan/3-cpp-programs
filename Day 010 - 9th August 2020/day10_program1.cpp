// ==============================================
// Day 010 - 9th August 2020
//
// 1. Write a program to print half pyramid using numbers.
// Sample output:
//
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
//
// ----------------------------------------

#include <iostream>
using namespace std;

int main(){
  int num;
  cout << "Enter a number upto what you want to print half pyramid: ";
  cin >> num;
  for (int i = 1; i <= num; i++ ){
    for (int j = 1; j <= i; j++ ){
      cout << j;
    }
    cout << endl;
  }
  return 0;
}
