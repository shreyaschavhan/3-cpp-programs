// Day 011 - 10th August 2020
//===============================================================================
// 1. A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//    Ask user for their salary and year of service and print the net bonus amount.
//===============================================================================

#include <iostream>
using namespace std;

int main(){
  double salary, net_bonus, bonus, years;
  cout << "Hello User!\n" ;
  cout << "Enter your salary: ";
  cin >> salary;
  cout << endl << "Enter year of service: ";
  cin >> years;
  bonus = (salary * 0.05);
  net_bonus = bonus + salary;
  if(years >= 5.0){
    cout << endl << "You got a bonus of: " << bonus << " Rs." << endl;
    cout << "You Final salary: " << net_bonus << endl;
  }
  else{
    cout << "You are not eligible for bonus!" << endl;
    cout << "You Final salary: " << salary << endl;
  }
  return 0;
}
