// 3. Write a program to find whether a given number (accept from the user) is even or odd,
// print out an appropriate message to the user.

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number to check [except 0]: ";
  cin >> num;
  if (num % 2 == 0)
  {
    cout << "The number is even.";
  }
  else
  {
    cout << "The number is odd.";
  }
}
