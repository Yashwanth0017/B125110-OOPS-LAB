#include<iostream>
using namespace std;
class TicketChecker;
class TrainSeat{
    int seat;
    string passenger;
    bool booked;
public:
    void input(){
        cin>>seat>>passenger>>booked;
    }
    friend class TicketChecker;
};
class TicketChecker{
public:
    void check(TrainSeat t){
        cout<<"Seat Number: "<<t.seat<<endl;

        if(t.booked){
            cout<<"Booked"<<endl;
            cout<<"Passenger: "<<t.passenger;
        }
        else
            cout<<"Available";
    }
};
int main(){
    TrainSeat t;
    t.input();
    TicketChecker c;
    c.check(t);
}