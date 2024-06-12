// 24b.	Write a program for array. Make a class with required members and use dynamic allocation of array. 
#include<iostream>
using namespace std;

class Array {
  int a;
  
public:
  void set(int x) {
    cout << "Enter the element at index " << x << ": ";
    cin >> a;
  }
  void display() {
    cout << a << " ";
  }
};

int main() {
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  
  Array *arr = new Array[n];

  for(int i = 0; i < n; i++) {
    arr[i].set(i);
  }

  for(int i = 0; i < n; i++) {
    arr[i].display();
  }

  cout << endl;
  delete[] arr;
  return 0;
}