// Day 012 - 11th August 2020
// =============================================
//
// 3. Create a function showEmployee() in such a way that it should accept employee name,
// and it’s salary and display both, and if the salary is missing in function call it should show it as 9000

#include <iostream>
#include <string>
using namespace std;

void showEmployee(){
  string name;
  string salary;
  cout << "Enter your name: ";
  getline(cin, name);   // new concept learned
  cout << "\nEnter your salary: ";
  //   if (cin.get() == '\n' ){
  //   cout << "Your Name: " << name << endl;
  //   cout << "Your Salary: 9000" << endl;
  // }
  // else {
  //    cin >> salary;
  //   // double new_salary = stof(salary);       // new concept
  //   cout << "Your Name: " << name << endl;
  //   cout << "Your Salary: " << salary << endl;
  // }
  while (cin.ignore()){
      // cin >> salary;
      // double new_salary = stof(salary);       // new concept
      cout << "Your Name: " << name << endl;
      cout << "Your Salary: " << salary << endl;
  }
}


int main(){
    showEmployee();
    return 0;
}
// new concept learned: https://www.programiz.com/cpp-programming/string-float-conversion
