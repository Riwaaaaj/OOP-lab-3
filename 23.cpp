// 23.	Write a meaningful program to illustrate the use of static data member and static function members. (no. of objects)
#include<iostream>
using namespace std;

class Counter {
  static int count;
public:
  Counter () {
    count++;
  }
  static void display() {
    cout << count << endl; // total no of objects in this case.
  }
};
int Counter::count = 0;
int main() {
  Counter c1, c2, c3, c4;
  // cout << Counter::count << endl; // in this case, count is public member of Counter. Hence, it can be used.
  Counter::display();
  c1.display();
  return 0;
}