// 22.	Write a simple program that convert the temperature in degree C to degree F and vice versa using the basic concept of class and object. Make separate class for C and F which will have the private member to hold the value and add conversion function in each class from C or F. 
#include<iostream>
using namespace std;

class FTempConversion {
  int  F;
public:
  void fSet() {
    cin >> F;
  }
  void fDisplay() {
    cout << (F - 32) * 5 / 9 << endl;
  }
  
};

class CTempConversion {
  int C;
public:
  void cSet() {
    cin >> C;
  }
  void cDisplay() {
    cout << (C * 9 / 5) + 32 << endl;
  }
};
int main() {
  CTempConversion a;
  FTempConversion b;
  a.cSet();
  a.cDisplay();
  b.fSet();
  b.fDisplay();
  return 0;
}