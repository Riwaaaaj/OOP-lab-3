// 26.	Assume that one constructor initialize member data say no_pax, tra_rate and provides 10% discount if number of no_pax exceeds 10. And display the total charge. Use two objects and show bit-by-bit copy of one object to another (copy constructor).
#include<iostream>
using namespace std;
class Travel {
  int no_pax, tra_rate, total_charge;
public:
  Travel(int noPax, int traRate) {
    no_pax = noPax;
    tra_rate = traRate;
    if (no_pax > 10) {
      total_charge = no_pax * tra_rate * 0.9;
    }else { 
      total_charge = no_pax * tra_rate;
    }
  }
  Travel(Travel &t) {
    no_pax = t.no_pax;
    tra_rate = t.tra_rate;
    total_charge = t.total_charge;
  }
    void display() {
        cout << "Number of passengers: " << no_pax << endl;
        cout << "Travel rate per passenger: " << tra_rate << endl;
        cout << "Total charge: " << total_charge << endl << endl;
    }
};
int main() {
    Travel t1(15, 100);
    t1.display();
    Travel t2 = t1;
    t2.display();
    return 0;
}