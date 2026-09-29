#include<iostream>
using namespace std;
class Counter{
    int value;
public:
    Counter(int v=0){
        value=v;
    }
    Counter operator++(){
        ++value;
        return *this;
    }
    Counter operator++(int){
        Counter temp=*this;
        value++;
        return temp;
    }
    void display(){
        cout<<value;
    }
};
int main(){
    int n;
    cout<<"Enter counter value: ";
    cin>>n;
    Counter c(n);
    cout<<"Before prefix: ";
    c.display();
    ++c;
    cout<<endl<<"After prefix: ";
    c.display();
    c++;
    cout<<endl<<"After postfix: ";
    c.display();
    return 0;
}