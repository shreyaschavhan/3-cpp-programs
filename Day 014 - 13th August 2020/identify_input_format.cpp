// Day 014 - 13th August 2020
// ================================================
//
// [Note - Solve using Functions]
// Concept - If-Else statements.......
//
// 3. Write a program to input any character and check whether it is alphabet, digit
//  or special character.
// Hint:   "a-z" or "A-Z" is alphabet
// 	"0-9" is digit.
// 	any other input is special character

#include <iostream>
using namespace std;

void checkInput(char input){
  if ((input >= 'a' && input <= 'z' ) || (input >= 'A' && input <= 'Z' )){
    cout << "The character " << input << " is an Alphabet." << endl;
  }
  else if (input >= 0 && input <= 9){
    cout << "The character " << input << " is a Digit." << endl;
  }
  else{
    cout << "The character " << input << " is a Special Character." << endl;
  }
}

int main(){
  char ch;
  cout << "Enter a Character: ";
  cin >> ch;
  cout << endl;
  checkInput(ch);
  return 0;
}
