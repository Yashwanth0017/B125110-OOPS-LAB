#include <iostream>
using namespace std;
int main() {
int battery;
 cout << "Enter battery percentage:";
cin >> battery;
  int *p = &battery;
    cout << "Current battery: " << *p << "%" << endl;
  int charge;
   cout << "Enter charging percentage to add:";
     cin >> charge;
  *p = *p + charge;
    cout << "Updated battery:" << *p << "%" << endl;
    return 0;
}