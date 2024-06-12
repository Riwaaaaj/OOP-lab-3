// 25.	Write a program that display the total time in 24-hour clock format having fixed time 12:34:56 and 10:35:14. One constructor should initialize member data hour, minute and second to 0 and another should initialize it to fixed values. Other two member functions should add two objects of type time passed as arguments and display the result 
#include<iostream>
using namespace std;
class Time {
  int sec, min, hr;
public:
  Time() {
    sec = 0;
    min = 0;
    hr = 0;
  }
  Time(int h, int m, int s) {
    sec = s;
    min = m;
    hr = h;
  }
  void add(Time x, Time y) {
    sec = (x.sec + y.sec) % 60;
    min = (x.min + y.min + (x.sec + y.sec) / 60) % 60;
    hr = x.hr + y.hr + (x.min + y.min + (x.sec + y.sec) / 60) / 60;
  }
  void display() {
    cout << hr << ":" << min << ":" << sec << endl;
  }
};
int main() {
  Time t1(12, 34, 56), t2(10, 35, 14), t3;
  t3.add(t1, t2);
  t3.display();
  return 0;
}