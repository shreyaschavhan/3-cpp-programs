// 1. Write a program to calculate the sum of three given numbers, if the values are equal then return three times of their sum.
//
// Ex. if the three no. for example are 1 , 2 , 3 then ans = 1 + 2 + 3 = 6
// if the three no. for example are 3, 3 , 3 then since 3 = 3 = 3 , ans = (3 + 3 + 3) * 3

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter the numbers: " << endl;
    cout << "Num1: ";
    cin >> num1;
    cout <<"\nNum2: ";
    cin >> num2;
    cout <<"\nNum3: ";
    cin >> num3;
    if (num1 == num2 &&  num1 == num3)
    {
      cout << "Answer: " << (num1 + num2 + num3) * 3 << endl;
    }
    else
    {
      cout << "Answer: " << (num1 + num2 + num3) << endl;
    }
  return 0;
}
