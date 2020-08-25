// Day 026 - 25th August 2020
// =============================================
// 3. Write a simple calculator that asks for two numbers and prints their sum,
// multiplication, subtraction and division.

#include <iostream>
using namespace std;

int main(){
  int num1, num2;
  cout << "Enter num1, num2 : ";
  cin >> num1 >> num2;
  cout << "Addition: " << num1 + num2 << endl;
  cout << "subtraction: " << num1 - num2 << endl;
  cout << "multiplication: " << num1 * num2 << endl;
  cout << "division: " << num1 / num2 << endl;
  return 0;
}
