#include<iostream>
using namespace std;
class HomeController;
class SmartDevice{
    string name,type;
    bool power;
public:
    void input(){
        cin>>name>>type>>power;
    }

    friend class HomeController;
};
class HomeController{
public:
    void display(SmartDevice d){
        cout<<"Device: "<<d.name<<endl;
        cout<<"Type: "<<d.type<<endl;

        if(d.power)
            cout<<"Power: ON";
        else
            cout<<"Power: OFF";
    }
    void on(SmartDevice &d){
        d.power=true;
    }

    void off(SmartDevice &d){
        d.power=false;
    }
};
int main(){
    SmartDevice d;
    d.input();
    HomeController h;
    h.display(d);
    h.on(d);
    cout<<"\nAfter ON:"<<endl;
    h.display(d);
    h.off(d);
    cout<<"\nAfter OFF:"<<endl;
    h.display(d);
    return 0;
}