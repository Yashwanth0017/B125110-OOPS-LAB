#include<iostream>
using namespace std;
class Securitysystem;
class Door{
    int number;
    bool lock;
 public:
 void input(){
    cout<<"Enter Number:";
    cin >> number;
    cout <<"Enter Status of Door(1 for locked and 0 for unlocked)";
    cin >> lock;
 }
  friend class Securitysystem;
};
class Securitysystem{
    public:
    void check(Door d){
        cout<<"Door Number:"<<d.number<<endl;
        if(d.lock){
            cout<<"Locked";
        }
        else{
            cout<<"Not Locked";
        }
    }
};
int main(){
    Door d;
    d.input();
    Securitysystem s;
    s.check(d);
}