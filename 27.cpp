// 27.	Write a program that first object contains "Engineers are" and second contains " Creatures of logic". Member function engineer should concatenate two strings by passing two objects as arguments. And display the contained of third object that contains the concatenated string  "Engineers are creatures of logic". Use constructor to initialize the member data. And make your own function for concatenation of two strings.
#include <iostream>
#include <cstring> // Included for using strcpy and strcat
using namespace std;

class Concatenate {
  char str[100]; 
public:
  // Constructor to initialize the member variable
  Concatenate(const char* s = "") {
    strcpy(str, s);
  }

  // Function to concatenate two strings from two Concatenate objects
  void concatenate(Concatenate obj1, Concatenate obj2) {
    strcpy(str, obj1.str);    //copy first string to str
    strcat(str, obj2.str);    // Concatenate second string to str
  }
  void display() {
      cout << str << endl;
  }
};
int main() {
  Concatenate str1("Engineers are"), str2(" Creatures of logic"), str3;

  str3.concatenate(str1, str2);

  str3.display();
    return 0;
}