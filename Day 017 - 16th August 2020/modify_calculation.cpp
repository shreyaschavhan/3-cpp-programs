// Day 017 - 16th August 2020
// ================================================
//
// 3. Modify the program above to ask the user to enter floating-point values
// and store them in double variables. Compare the outputs of the two programs for
// some inputs of your choice.

// Day 017 - 16th August 2020
// ================================================
// 2. Write a program that prompts the user to enter two integer values.
// Store these values in int variables named val1 and val2. Write your program to
// determine the smallest, largest, sum, difference, product and the ratio of
// these values and report them to the user.
//
// --------------------------------------

#include <iostream>
using namespace std;

void smallest_largest(double val1, double val2){
  if (val1 > val2)
  {
      cout << "Smallest: " << val2 << endl;
      cout << "Largest: " << val1 << endl;
  }
  else if (val1 < val2)
  {
    cout << "Smallest: " << val1 << endl;
    cout << "Largest: " << val2 << endl;
  }
  else
    cout << "Both are equal" << endl;
}

void operations(double val1, double val2){
  cout << "Difference: " << val1 - val2 << endl;
  cout << "Sum: " << val1 + val2 << endl;
  cout << "Product: " << val1 * val2 << endl;
  cout << "Ratio: " << val1/val2 << endl;
}

int main(){
  double val1, val2;
  cout << "Enter val1, val2 respectively: ";
  cin >> val1 >> val2;
  cout << endl;
  smallest_largest(val1, val2);
  operations(val1, val2);
  return 0;
 }
