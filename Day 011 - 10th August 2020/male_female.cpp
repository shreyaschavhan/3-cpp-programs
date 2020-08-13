// 3. Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
//    if employee is female, then she will work only in urban areas.
//    if employee is a male and age is in between 20 to 40 then he may work in anywhere
//    if employee is male and age is in between 40 t0 60 then he will work in urban areas only.
//    And any other input of age should print "ERROR".

#include <iostream>
using namespace std;

int main(){
  string sex, marital_status;
  int age;
  cout << "Enter your age: ";
  cin >> age;
  cout << endl;
  while (true){
    cout << "Enter your sex( M or F ): ";
    cin >> sex;
    cout << endl << "Enter your marital status: ";
    cin >> marital_status;
    if((sex == "m" || sex == "M" || sex == "f" || sex == "F") && (marital_status == "y" || marital_status == "Y" || marital_status == "n" || marital_status == "N")){
      break;
    }
    else{
      continue;
    }
  }
  if (age >= 20 && age <= 60){
    if (sex == "f" || sex == "F" ){
      cout << "You Should work in urban area only!"<< endl;
    }
    else if (sex == "m" || sex == "M"){
      if (age >= 20 && age < 40){
        cout << "You can work anywhere." << endl;
      }
      else{
        cout << "You should work in urban areas only!" << endl;
      }
    }
  }
    else{
      cout << "Error: You are either 20-[age < 20] or 60+[age > 60]" << endl;
      cout << "You cannot work!"<< endl;
    }

  return 0;
}
