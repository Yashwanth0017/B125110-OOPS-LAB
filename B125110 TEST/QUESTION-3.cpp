#include <iostream>
using namespace std;
int main() {
 int equipment[6];
 int i;
 cout << "Enter 6 equipment IDs:" << endl;
 for (i = 0; i < 6; i++) {
        cin >> *(equipment + i);
    }
 int *p = equipment;
 cout << "\nEquipment IDs and addresses:" << endl;
 for (i = 0; i < 6; i++) {
    cout << "ID: " << *p << " Address: " << p << endl;
        p++;
 }
 return 0;
}