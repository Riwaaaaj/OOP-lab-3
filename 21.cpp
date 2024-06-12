// 21.	Write a program that will represent angular measurement in degree with OOP approach the program should have conversion functions to convert to radian measurement.
#include<iostream>
#define PI 3.1416
using namespace std;
class Angle {
  float degree;
public:
  void set() {
    cout << "Enter degree: ";
    cin >> degree;
  }
  void display() {
    cout << "radian: " << degree * PI / 180 << endl;
  }
};
int main() {
  Angle a1;
  a1.set();
  a1.display();
  return 0;
}