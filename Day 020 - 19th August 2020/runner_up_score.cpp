// Day 020 - 19th August 2020
// =====================================================
//
// 1. Given the participant's score sheet for your University Sports Day, you
// are requierd to find the runner-up score. You are given n scores. Find the score of the runner-up.
//
// Sample input:
// 2 3 6 5 10
//
// Sample output:
// 6
//
// Hint: Print the Second maximum score.
//
// -------------------------------------------------------


#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++){
        cout << "Enter score"<< i+1 << " : ";
        cin >> a[i];
        cout << endl;
    }
    sort(a, a + n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    cout << "The runner-up score: ";
    cout << a[n-2];
    return 0;
}


// ----------------------------------------------------------------------------
// Hint: https://www.geeksforgeeks.org/sort-3-numbers/
