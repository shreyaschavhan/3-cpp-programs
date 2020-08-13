// Day 009 - 8th August 2020
// ====================================
//
// 1. create a pattern like this using for loop:
// Sample output:
// rows = 4
//
// # # # #
// # # # #
// # # # #
// # # # #
//
// Hint:
// 1. take input how many rows user want!
// 2. use for loop to print the given pattern.
//
// ==========================================================

#include <iostream>
using namespace std;

int main(){
  int rows;
  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Your pattern: "<< endl;

  for (int i = 0; i < rows; i++){
    for (int j = 0; j < rows; j ++ ){
      cout << "#";
    }
    cout << endl;
  }
  return 0;

}
