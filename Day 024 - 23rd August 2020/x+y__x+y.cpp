// Day 024 - 23rd August 2020
// __________________________________
//
// Revision Questions
// -----------------------------
// 3. Write a program to solve (x + y) * (x + y).
// Test Data : x = 4, y = 3
// Expected Output : (4 + 3) ^ 2 = 49

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int x, y;
  cout << "Enter x, y: ";
  cin >> x >> y;
  cout << "Output: " << (x + y) * (x + y) << endl;
  return 0;
}
