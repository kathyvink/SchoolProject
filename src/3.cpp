// C++ program to demonstrate how to use conditional statements

#include <iostream>
using namespace std;

int main() {
  int age = 17; // Change this value to test the program with different ages.
  if (age >= 18) {
    cout << "You are eligible to vote." << endl;
  } else {
    cout << "Sorry, you are not eligible to vote yet." << endl;
  }
  return 0;
}