// 28.	Write a program to make a specific function of a class as a friend of other class to add elements from the two classes. Both of these classes should have two integer members. Make other global function to multiply objects of class one and class two.
#include <iostream>
using namespace std;
class ClassTwo;
class ClassOne {
    int a, b;
public:
    ClassOne(){
       a = 0;
       b = 0;
    }
    ClassOne(int x, int y){
       a = x;
       b = y;
    }
    // Friend function declaration
    friend void addElements(const ClassOne &, const ClassTwo &);
    friend void multiplyElements(const ClassOne &, const ClassTwo &);

    void display() const {
        cout << "ClassOne - a: " << a << ", b: " << b << endl;
    }
};
class ClassTwo {
    int c, d;
public:
    ClassTwo(){
       c = 0;
       d = 0;
    }
    ClassTwo(int x, int y){
       c = x;
       d = y;
    }
    // Friend function declaration
    friend void addElements(const ClassOne &, const ClassTwo &);
    friend void multiplyElements(const ClassOne &, const ClassTwo &);

    void display() const {
        cout << "ClassTwo - c: " << c << ", d: " << d << endl;
    }
};
void addElements(const ClassOne &obj1, const ClassTwo &obj2) {
    int sum_a_c = obj1.a + obj2.c;
    int sum_b_d = obj1.b + obj2.d;
    cout << "Sum of a and c: " << sum_a_c << endl;
    cout << "Sum of b and d: " << sum_b_d << endl;
}
void multiplyElements(const ClassOne &obj1, const ClassTwo &obj2) {
    int product_a_c = obj1.a * obj2.c;
    int product_b_d = obj1.b * obj2.d;
    cout << "Product of a and c: " << product_a_c << endl;
    cout << "Product of b and d: " << product_b_d << endl;
}
int main() {
    ClassOne obj1(3, 4);
    ClassTwo obj2(5, 6);

    obj1.display();
    obj2.display();

    addElements(obj1, obj2);

    multiplyElements(obj1, obj2);
    return 0;
}