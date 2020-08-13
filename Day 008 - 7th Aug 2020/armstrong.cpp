// Day 008 -  7th August 2020
// ==================================
// 1.Write program to check if a 3 digit number is an Armstrong number or not
// (do not use the 'def' function)
// If 1³+5³+3³ = 153 ala tar it's amstrong
// Length of the number 3 ahe na, mag 3 ne cube karayacha
// Ani if sum == original no., the no. is amstrong no.
// Hint:
// Algorithm:
// 1 . Start
// 2 . read number
// 3 . set sum=0 and duplicate=number
// 4 . reminder=number%10
// 5 . sum=sum+(reminder*reminder*reminder)
// 6 . number=number//10
// 7 . repeat steps 4 to 6 until number > 0
// 8 . if sum = duplicate
// 9 . display number is armstrong
// 10. else
// 11. display number is not armstrong
// 12. stop
// ============================================

#include <iostream>
using namespace std;

int main(){
  int num, sum = 0, dup, remainder;
  cout << "Enter a number: ";
  cin >> num;
  dup = num;
  while(dup > 0){
    remainder = dup % 10;
    sum = sum + (remainder * remainder * remainder);
    dup = dup / 10;
  }
  if (sum == num){
    cout << "The number is Armstrong number!" << endl;
  }
  else{
    cout << "The number is not Armstrong number!" << endl;
  }
  return 0;
}
