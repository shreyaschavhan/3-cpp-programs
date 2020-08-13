
// Write a program to swap two variables.
// i)using three variable.



#include <iostream>
using namespace std;
int main()
{
    // case 1: using three variables
    int var1 = 2, var2 = 8, temp;
    cout << "Before Swapping: \n"<< "var1 = "<<var1;
    cout << "\n"<< "var2 = "<<var2;
    temp = var1;
    var1 = var2;
    var2 = temp;
    cout << "\nAfter Swapping: " << '\n'<< "var1 = "<<var1;
    cout << '\n'<< "var2 = "<<var2;
    // case 2: using only two variables
    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;
    cout << "\nAfter Swapping again: " << '\n'<< "var1 = "<<var1;
    cout << '\n'<< "var2 = "<<var2;
}
