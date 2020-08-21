// Day 021 - 20th August 2020
// ====================================================================
//
// 3. Write a program to print all even number in between 1 to 100 and all odd numbers between 100 - 200 using loop.

#include <iostream>
using namespace std;

int main(){
  cout << "All even numbers between 1 to 100: " << endl;
  for(int i = 1; i <= 100; i++){
    if (i % 2 == 0){
      cout << i << " ";
    }
  }
  cout << "All odd numbers between 100 to 200: " << endl;
  for(int i = 100; i <= 200; i++){
    if (i % 2 != 0){
      cout << i << " ";
    }
  return 0;
}
