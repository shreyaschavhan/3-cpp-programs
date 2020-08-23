// Day 022 - 21st August 2020
// ==================================================================
// 3. Write a program using function to check if the number is prime or not.
//
// Hint:
// for i in range(2, n):
// if (n % i == 0):
// number is not prime
// else:
// prime
// --------------------------------------------------------------------
// Day 023 - 22nd August 2020
// ================================================
//
// 1. Write a program to print prime nbers between 1 to 100.
//
// ------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;
        for(i = 2; i <= (n / 2); i++) {
            if(n % i == 0) {
                i = n;
                break;
            }
        }
        if (n == 2){
            cout << "2 is a prime number";
        }
        else if(i != n) {
            cout << n << " is prime number.";
        }
        else{
            cout << n << " is not prime number";
        }
    return 0;
}
