#include <iostream>
using namespace std;
int main() {
 int seats[8];
  int i;
  cout << "Enter 8 seat numbers:" << endl;
    for (i = 0; i < 8; i++) {
        cin >> *(seats + i);
    }
 cout << "\nBefore correction:" << endl;
 for (i = 0; i < 8; i++) {
        cout << *(seats + i) << " ";
    }
 int position, newSeat;
 cout << "\nEnter position to correct (1-8): ";
 cin >> position;
 cout << "Enter correct seat number: ";
  cin >> newSeat;
 *(seats + position - 1) = newSeat;
  cout << "\nAfter correction:" << endl;
  for (i = 0; i < 8; i++) {
         cout << *(seats + i) << " ";
    }
return 0;
}