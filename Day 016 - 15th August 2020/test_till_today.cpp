// Day 016 - 15th August 2020
// =======================================================
//
// Test! = for me too!
// ---------
// Writing a letter using user input.
// ---------
//
// 1.  This drill is to write a program that produces a simple form letter based
// on user input. Begin by typing the code by asking the user to enter his or
// her first name and writing "Hello, first_name" where first_name is the name
// entered by the user. Then modify your code as follows:
// change the prompt to "Enter the name of the person you want to write this letter."
// and change the output to "Dear first_name,". Don't forget the comma.
//
// 2. Add an introductory line or two, like "How are you? I am fine. I miss you."
// Be sure to indent the first line. Add a gew more lines of your choice -- after all
// it's your letter.
//
// 3. Now prompt the user for the name of another friend, and store it in
// friend_name. Add a line to your letter: "Have you seen friend_name lately?"
//
// 4. Declare a char variable called friend_sex and initialize its value to 0.
// Promt the user to enter an m if the friend is male and an f if the friend is female.
// Assign the value entered to the variable friend_sex. Then use if-else statement to write
// the following:
// If the friend is male, write "If you see friend_name please ask him to call me."
// If the friend is female, write "If you see friend_name please ask her to call me."
//
// 5. Prompt the user to enter the age of the recipient and assign it to an int
// variable age. Have your program write "I hear you just had a birthday and you are age years old."
// If age is 0 or less or 110 or more, call - error("You're kidding!").
//
// 6. Add this to your letter:
//
// If your friend is under 12, write "Next year you will be age+1".
// If your friend is 17, write "Next year you will be able to vote."
// If your friend is over 70, write "I hope you are enjoying retirement."
//
// check your program to make sure it responds appropriately to each kind of value.
//
// 7. Add "Yours Sincerely," followed by two blank lines for a signature, followed by your name.
//


#include <iostream>
using namespace std;

int main(){
  // #1
  string first_name;
  cout << "Enter the name of the person you want to write this letter: ";
  cin >> first_name;
  cout << "\n";
  cout << "Dear " << first_name << "," << endl;
// #2
  cout << "\tHow are you dear?" << endl;
  cout << "\tI have one wish for you!: " << endl;
  cout << "\tI want you to be happy always... " << endl;
  cout << "\tbecause you deserve it;" << endl;
  cout << "\tI want you to be happy always... " << endl;
  cout << "\tbecause this is something that makes me happy." << endl;
  cout << "\tStay the same always." << endl;

// #3
  string friend_name;
  cout << "Enter another friends name: ";
  cin >> friend_name;
  cout << '\n';
  cout << "\tBTW leave it! Have you seen " << friend_name << " lately?\n";
// #4
  char friend_sex;
  while (true){
    cout << "Your friend is male OR female? [m/f] :";
    cin >> friend_sex;
    if (friend_sex == 'm' || friend_sex == 'M'){
      cout << "\tIf you see " << friend_name << " please ask him to call me." << endl;
      break;
    }
    else if (friend_sex == 'f' || friend_sex == 'F') {
      cout << "\tIf you see " << friend_name << " please ask her to call me." << endl;
      break;
    }
    else{
      cout << "Wrong input! Enter once again!\n";
      continue;
    }
  }
// #5
  int age;
  while (true){
  cout << "Enter age: ";
  cin >> age;
  cout << "\n";
  if (age >= 110 || age <= 0){
    cout << "Error(\"You are kidding\")" << endl;
    cout << "Enter once again!" << endl;
    continue;
  }
  else{
    cout << "\tI hear you just had a birthday and you are " << age << " years old.\n";
    break;
  }
  }
// #6
  if (age > 0 && age < 12){
    cout << "\tNext year you will be " << age + 1 << endl;
  }
  else if (age == 17){
    cout << "\tNext year you will be able to vote." << endl;
  }
  else if (age > 70 && age <110){
    cout << "\tI hope you are enjoying retirement." << endl;
  }
  else{
    cout << endl;
  }

// #7

  cout << "Your Sincerely," << endl;
  cout << endl;
  cout << endl;
  cout << "Shreyas" << endl;

  // final letter:

  cout << "**************************************************************************" << endl;
  cout << "Final letter: "<< endl;
  cout << "Dear " << first_name << "," << endl;
  cout << "\tHow are you dear?" << endl;
  cout << "\tI have one wish for you!: " << endl;
  cout << "\tI want you to be happy always... " << endl;
  cout << "\tbecause you deserve it;" << endl;
  cout << "\tI want you to be happy always... " << endl;
  cout << "\tbecause this is something that makes me happy." << endl;
  cout << "\tStay the same always." << endl;
  cout << "\tBTW leave it! Have you seen " << friend_name << " lately?\n";
  if (friend_sex == 'm' || friend_sex == 'M'){
    cout << "\tIf you see " << friend_name << " please ask him to call me." << endl;
  }
  else if (friend_sex == 'f' || friend_sex == 'F'){
    cout << "\tIf you see " << friend_name << " please ask her to call me." << endl;
  }
  if (age >= 110 || age <= 0){
    cout << "Error(\"You are kidding\")" << endl;
  }
  else{
    cout << "\tI hear you just had a birthday and you are " << age << " years old.\n";
  }
  if (age < 12 && age > 0){
    cout << "\tNext year you will be " << age + 1 << endl;
  }
  else if (age == 17){
    cout << "\tNext year you will be able to vote." << endl;
  }
  else if (age > 70 && age < 110){
    cout << "\tI hope you are enjoying retirement." << endl;
  }
  else{
    cout << endl;
  }

  cout << "Your Sincerely," << endl;
  cout << endl;     // Space for signature
  cout << endl;     // space for signature
  cout << "Shreyas" << endl;


}
