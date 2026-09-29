#include<iostream>
using namespace std;
class Date{
    int day,month,year;
public:
    Date(int d=0,int m=0,int y=0){
        day=d;
        month=m;
        year=y;
    }
    bool operator==(Date d){
        return day==d.day&&month==d.month&&year==d.year;
    }
};
int main(){
    int d1,m1,y1,d2,m2,y2;
    cout<<"Enter first date: ";
    cin>>d1>>m1>>y1;
    cout<<"Enter second date: ";
    cin>>d2>>m2>>y2;
    Date date1(d1,m1,y1);
    Date date2(d2,m2,y2);
    if(date1==date2)
        cout<<"Both dates are equal.";
    else
        cout<<"Dates are not equal.";
    return 0;
}