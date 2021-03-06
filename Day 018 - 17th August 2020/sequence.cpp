// Day 018 - 17th August 2020
// ==============================================
//
// 1. Write a program that promts the user to enter three integer values, and
// then outputs the values in numberical sequence separated by commas.
// Example:
// So, if the user enters teh values 10 4 6, the output should be
// 4, 6, 10. If two values are the same, they should just be ordered together.
// So, the input 4 5 4 should give 4,4,5.
//
// Hint : If else.. Statement.

#include <iostream>
using namespace std;

int main(){
  int num1, num2, num3;
  cout << "Input three numbers :: (Ex. num1 num2 num3) : ";
  cin >> num1 >> num2 >> num3;
  cout << endl;
  if (num1 <= num2 && num2 <= num3){
    cout << "Output: " << num1 << ", " << num2 << ", " << num3 << endl;
  }
  else if (num1 <= num3 && num3 <= num2){
    cout << "Output: " << num1 << ", " << num3 << ", " << num2 << endl;
  }
  else if (num2 <= num1 && num1 <= num3){
    cout << "Output: " << num2 << ", " << num1 << ", " << num3 << endl;
  }
  else if (num2 <= num3 && num3 <= num1){
    cout << "Output: " << num2 << ", " << num3 << ", " << num1 << endl;
  }
  else if (num3 <= num2 && num2 <= num1){
    cout << "Output: " << num3 << ", " << num2 << ", " << num1 << endl;
  }
  else if (num3 <= num1 && num1 <= num2){
    cout << "Output: " << num3 << ", " << num1 << ", " << num2 << endl;
  }
  return 0;

}

// ================================================================================
// 2nd Way:
// ================================================================================

//Write a program that prompts the user to enter three integer values, and
//then outputs the values in numerical sequence separated by commas.
//Example:
//So, if the user enters the values 10 4 6, the output should be
//4, 6, 10. If two values are the same, they should just be ordered together.
//So, the input 4 5 4 should give 4,4,5.

#include<iostream>
using namespace std;

int main()
{
    int a,b,c,temp;
    cout<<"Enter the value\n";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        temp=c;
        c=a;
        a=temp;
        if(a>b)
        {
            temp=b;
            b=a;
            a=temp;
        }
    }
    if(b>a && b>c)
    {
        temp=c;
        c=b;
        b=temp;

        if(a>b)
        {
            temp=b;
            b=a;
            a=temp;
        }
    }
    if(c>a && c>b)
    {
        if(a>b)
        {
           temp=b;
            b=a;
            a=temp;
        }
    }
    cout<<a<<" , "<<b<<" , "<<c;
    return 0;
}
