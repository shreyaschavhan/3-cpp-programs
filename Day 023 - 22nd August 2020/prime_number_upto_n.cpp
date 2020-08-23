// Day 023 - 22nd August 2020
// ================================================
//
// 1. Write a program to print prime numbers between 1 to 100.
//
// ------------------------------------------------
//
// 2. Modify above program to print prime numbers within a given range.


#include <iostream>

using namespace std;

int main() {
    int num, i, upto;
    cout << "Find prime numbers upto : ";
    cin >> upto;
    cout << endl << "All prime numbers upto " << upto << " are : " << endl;
    for(num = 2; num <= upto; num++) {
        for(i = 2; i <= (num / 2); i++) {
            if(num % i == 0) {
                i = num;
                break;
            }
        }
        if (num == 2){
          cout << num << " ";
        }
        if(i != num) {
            cout << num << " ";
        }
    }

    return 0;
}
