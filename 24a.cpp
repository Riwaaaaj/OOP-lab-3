// 24a.	Write a program for array. Make a class with required members and use dynamic allocation of array. 
#include <iostream>
using namespace std;
class Array {
  int n, *arr;
public:
  Array() {
    cout << "Enter the size of array: ";
    cin >> n;
    arr = new int[n];
  }
  void set() {
    for (int i = 0; i < n; ++i) {
      cout << "Enter the element at index " << i << ": ";
      cin >> arr[i];
    }
  }
  void display() {
    for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
    }
  }
  ~Array() {
    cout << endl;
    delete[] arr;
  }
};
int main() {
  Array a;
  a.set();
  a.display();
  return 0;
}