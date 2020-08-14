// Day 015 - 14th August 2020
// =========================================================
//
// concept : if elses statements...
//
// 1. Write a program to check whether the triangle is equilateral, isosceles or scalene triangle.
//
// ==========================================================

#include <iostream>
using namespace std;

void triangle(double p, double q, double r){
  if (p == q && q == r){
    cout << "The triange is Equilateral Triangle."<< endl;
  }
  else if ( p == q || q ==r || p == r){
    cout << "The triange is Isosceles Triangle."<< endl;
  }
  else{
    cout << "The triange is Scalene Triangle."<< endl;
  }
}

int main(){
  double a, b, c;
  cout << "Enter side a: ";
  cin >> a;
  cout << "\nEnter side b: ";
  cin >> b;
  cout << "\nEnter side c: ";
  cin >> c;
  triangle(a, b, c);
  return 0;
}
