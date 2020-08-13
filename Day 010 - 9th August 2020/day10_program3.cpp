// Day 010 - 9th August 2020
// =======================================================================
// 3) A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.
// =========================================================================

#include <iostream>
using namespace std;

int main(){
  double held, attended;
  double percentage;
  cout << "Enter the number of classes held: ";
  cin >> held;
  cout << endl;
  cout << "Enter the number of classes attended: ";
  cin >> attended;
  cout << endl;
  percentage = (attended/held) * 100.0;

  if ( percentage >= 75.0 && percentage <= 100.0){
    cout << "You have attended " << percentage << "% of classes!" << endl;
    cout << "Congratulations! You can sit in Exams! " << endl;
  }
  else if ( percentage > 100.0 ){

    cout << "LOL, Buddy! Enter the correct data." << endl;
  }
  else {
    cout << "You have attended " << percentage << "% of classes!" << endl;
    cout << "Sorry! You are not allowed to appear the Examination." << endl;
  }
  return 0;
}
