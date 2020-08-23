// Day 014 - 13th August 2020
// ================================================
//
// [Note - Solve using Functions]
// Concept - If-Else statements.......
//
// 1. Write a program to check whether a character is uppercase or lowercase.
// Hint: https://www.geeksforgeeks.org/isupper-islower-application-c/
//
// ==========================================================================

#include <iostream>
#include <cctype>

using namespace std;
void uppercase_lowercase(char character){
  if (isupper(character)){
    cout << "The character "<< character << " is uppercase." << endl;
  }
  else if(islower(character)) {
    cout << "The character " << character << " is lowercase." << endl;
  }
  else{
    cout << "It is not an Alphabet.";
  }
}

int main(){
  char ch;
  cout << "Enter a character: ";
  cin >> ch;
  cout << endl;
  uppercase_lowercase(ch);
  return 0;
}
