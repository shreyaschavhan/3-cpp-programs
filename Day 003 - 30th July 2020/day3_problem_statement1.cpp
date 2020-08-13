#include <iostream>
using namespace std;

int main()
{
  string Name;
  int age, height;
  cout << "Enter Your Name: ";
  cin >> Name;

  cout << "\nHow tall are you?(in ft)(approx): ";
  cin >> height;

  cout << "\nHow old you are?: ";
  cin >> age;

  cout << "Hi " << Name << "! Nice to have you here! Enjoy your day! Have a nice day ahead." << endl;
  cout << "Your Input: " << endl;
  cout << "Your Name: " << Name << endl;
  cout << "Your Age: " << age << endl;
  cout << "Your Height(in ft): "<< height << endl;
  return 0;
}
