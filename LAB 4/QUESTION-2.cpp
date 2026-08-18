#include<iostream>
using namespace std;
class Mobile{
    string brand,model;
    int battery;
public:
    void input(){
        cin>>brand>>model>>battery;
    }
    friend void checkBattery(Mobile m);
};
void checkBattery(Mobile m){
    cout<<"Brand: "<<m.brand<<endl;
    cout<<"Model: "<<m.model<<endl;
    cout<<"Battery: "<<m.battery<<"%"<<endl;
    if(m.battery<20)
        cout<<"Battery Low";
    else
        cout<<"Battery Normal";
}
int main(){
    Mobile m;
    m.input();
    checkBattery(m);
}