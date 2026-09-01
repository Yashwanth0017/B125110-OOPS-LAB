#include <iostream>
using namespace std;
int main() {
 int waterLevel;
 cout << "Enter current water level:";
 cin >> waterLevel;
 int *p = &waterLevel;
 cout << "Current water level: " << *p << endl;
 int add, remove;
 cout << "Enter amount of water to add:";
 cin >> add;
 *p += add;
 cout << "Enter amount of water to remove:";
 cin >> remove;
 *p -= remove;
 cout << "Final water level:" << *p << endl;
return 0;
}