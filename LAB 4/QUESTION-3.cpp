#include<iostream>
using namespace std;

class ParkingSlot{
    int slot;
    string vehicle;
    bool occupied;
public:
    void input(){
        cout << "Enter Vehicle Number :";
        cin >> vehicle;
        cout << "Enter Slot Number:";
        cin >> slot;
        cout <<"Enter Occcupancy Status(1 for occupied and 0 for not occupied):";
        cin >> occupied;
    }
    friend void checkSlot(ParkingSlot p);
};
void checkSlot(ParkingSlot p){
    cout<<"Slot: "<<p.slot<<endl;
    if(p.occupied)
        cout<<"Occupied\nVehicle: "<<p.vehicle;
    else
        cout<<"Available";
}
int main(){
    ParkingSlot p;
    p.input();
    checkSlot(p);
}