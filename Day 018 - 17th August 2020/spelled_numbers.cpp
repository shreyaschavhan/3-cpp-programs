// Day 018 - 17th August 2020
// ==============================================
//
// 2. Write a program that converts spelled-out numbers such as "zero" and
// "two" into digits, such as 0 and 2. When the user inputs a number,
// the program should print out the corresponding digit. Do it for the values 0,
// 1, 2, 3 and 4 and write out "not a number, I know!" if the user enters something that doesn't
// correspond, such as "Stupid computer!"

#include <iostream>
using namespace std;

int main(){
  string spelled_number;
  cout << "Input in lower case only!" << endl;
  cout << "Enter the spelled-out number: ";
  cin >> spelled_number;
  cout << endl;

  if (spelled_number == "zero"){
    cout << "Zero: 0" << endl;
  }
  else if (spelled_number == "one"){
    cout << "One: 1" << endl;
  }
  else if (spelled_number == "two"){
    cout << "Two: 2" << endl;
  }
  else if (spelled_number == "three"){
    cout << "Three: 3" << endl;
  }
  else if (spelled_number == "four"){
    cout << "Four: 4" << endl;
  }
  else{
    cout << "Not a number, I know!" << endl;
  }
  return 0;
}
