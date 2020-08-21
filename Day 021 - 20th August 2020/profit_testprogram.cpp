// Day 021 - 20th August 2020
// ====================================================================
//
// Extra TEST Q.
// Read the cost and selling price of an object and write a program to find the profit earned by a
// seller (in rupees). The selling price is greater than the cost price.
//
// Hint: Profit = Selling Price - Cost Price.
// Tip: You have to display the profit.
//
// ------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){
  float selling_price, cost_price;
  cout << "Enter the selling and cost price of the product respectively: ";
  cin >> selling_price >> cost_price;
  float profit;
  profit = selling_price - cost_price;
  cout << "Profit: "<< profit << endl;
  return 0;
}
