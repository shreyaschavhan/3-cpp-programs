// 2 Write a program to print an string number of times user want.
//
// Sample output
// Enter the string: Hello, World!
// How many times you want to print? : 3
// Output:
// Hello, world!
// Hello, world!
// Hello, world!

#include <iostream>
using namespace std;

int main()
{
  int num;
  string str;
  cout << "Enter the string: ";
  cin >> str;
  cout << "How many times you want to print?: ";
  cin >> num;
  for (int i = 0; i < num; i++)
  {
    cout << str << endl;
  }
  return 0;
}
