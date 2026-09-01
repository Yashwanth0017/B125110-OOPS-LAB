#include <iostream>
using namespace std;
void updateStatus(int*status) {
if (*status == 1) 
    {
        *status = 2;
    }
 else if (*status == 2) {
        *status = 3;
    }
}
int main(){
 int status;
 cout << "Enter status (1-Processing, 2-Shipped, 3-Delivered): ";
 cin >> status;
 cout << "Status before update: " << status << endl;
 updateStatus(&status);
 cout << "Status after update: " << status << endl;
 return 0;
}