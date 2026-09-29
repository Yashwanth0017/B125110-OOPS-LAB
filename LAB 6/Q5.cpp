#include<iostream>
using namespace std;
class Time{
    int hours,minutes;
public:
    Time(int h=0,int m=0){
        hours=h;
        minutes=m;
    }
    Time operator+(Time t){
        Time temp;
        temp.hours=hours + t.hours;
        temp.minutes=minutes + t.minutes;
        if(temp.minutes>=60){
            temp.hours++;
            temp.minutes = temp.minutes-60;
        }
        return temp;
    }
    void display(){
        cout<<hours<<" hours "<<minutes<<" minutes";
    }
};
int main(){
    int h1,m1,h2,m2;
    cout<<"Enter first time: ";
    cin>>h1>>m1;
    cout<<"Enter second time: ";
    cin>>h2>>m2;
    Time t1(h1,m1);
    Time t2(h2,m2);
    Time t3 = t1+t2;
    cout<<"Result: ";
    t3.display();
    return 0;
}