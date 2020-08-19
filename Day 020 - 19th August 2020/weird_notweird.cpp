// Day 020 - 19th August 2020
// =====================================================

// 3. Given an integer, n, perform the following conditional actions:
//
// If n is odd, print Weird
// If n is even and in the inclusive range of 2 to 5, print Not Weird
// If n is even and in the inclusive range of 6 to 20, print Weird
// If n is even and greater than 20, print Not Weird

#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter the value of n: ";
  cin >> n;
  if (n % 2 == 0){
    cout << "The number is even ";
    if (n >= 2 && n <= 5){
      cout << "and it is \"Not Weird\"."<< endl;
    }
    else if(n >= 6 && n <= 20){
      cout << "and it is \"Weird\"."<< endl;
    }
    else if (n > 20 ){
      cout << "and it is \"Not Weird\"."<< endl;
    }
  }
  else{
    cout << "The number is odd and it is \"Weird\"."<< endl;
  }
  return 0;
}
