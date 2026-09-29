#include<iostream>
using namespace std;
class Distance{
    int feet,inches;
public:
    Distance(int f=0,int i=0){
        feet=f;
        inches=i;
    }
    Distance operator+(Distance d){
        Distance temp;
        temp.feet=feet+d.feet;
        temp.inches=inches+d.inches;
        if(temp.inches>=12){
            temp.feet++;
            temp.inches=temp.inches-12;
        }
        return temp;
    }
    void display(){
        cout<<feet<<" feet "<<inches<<" inches";
    }
};
int main(){
    int f1,i1,f2,i2;
    cout<<"Enter first distance: ";
    cin>>f1>>i1;
    cout<<"Enter second distance: ";
    cin>>f2>>i2;
    Distance d1(f1,i1);
    Distance d2(f2,i2);
    Distance d3=d1+d2;
    cout<<"Result: ";
    d3.display();
    return 0;
}