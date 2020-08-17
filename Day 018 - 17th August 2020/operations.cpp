// Day 018 - 17th August 2020
// ==============================================
//
// 3. Write a program that takes an operation and two numbers and outputs the result accordingly.
// Do this for all operations: addition, subtraction, multiplication, division
// For example:
// operation : + (or addition)
// num1: 100
// num2: 3
// Ans: 100 + 3 = 103
// -------------
// operation : * (or multiplication)
// num1 : 4
// num2: 5
// Ans: 4 * 5 = 20
//
// --------------------
// Hint:
// 1. Declare a string variable named operation.
// 2. Declare int variables and take input
// 3. use if else statement to figure out which operation the user wants,
//    for example, if (operation == "+").
// 4. print the results.

#include <iostream>
using namespace std;

int main(){
  int num1, num2;
  string operation;
  cout << "Operations you can do: " << endl;
  cout << "(addition/subtraction/multiplication/division) OR (+/-/*/'/')" << endl;
  cout << "Enter numbers:: (Ex. num1 num2):  ";
  cin >> num1 >> num2;
  cout << "Enter the operation you want to perform: ";
  cin >> operation;

  if (operation == "addition" || operation == "+"){
    cout << "So you want to perform addition!" << endl;
    cout << "Addition: " << num1 <<" + " << num2 << " = " << num1 + num2 << endl;
  }
  else if (operation == "subtraction" || operation == "-"){
    cout << "So you want to perform Subtraction!" << endl;
    cout << "Subtraction: " << num1 <<" - " << num2 << " = " << num1 - num2 << endl;
  }
  else if (operation == "multiplication" || operation == "*"){
    cout << "So you want to perform multiplication!" << endl;
    cout << "Multiplication: " << num1 <<" * " << num2 << " = " << num1 * num2 << endl;
  }
  else if (operation == "division" || operation == "/"){
    cout << "So you want to perform division!" << endl;
    cout << "Division: " << num1 <<" / " << num2 << " = " << num1 / num2 << endl;
  }
  else{
    cout << "Wrong Input!" << endl;
  }
  return 0;
}
