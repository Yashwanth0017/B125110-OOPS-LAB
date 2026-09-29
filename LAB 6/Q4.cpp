#include<iostream>
using namespace std;
class Number{
    int value;
public:
    Number(int v=0){
        value=v;
    }
    Number operator-(){
        return Number(-value);
    }
    void display(){
        cout<<value;
    }
};
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    Number n1(n);
    Number n2=-n1;
    cout<<"n1 = ";
    n1.display();
    cout<<endl;
    cout<<"n2 = ";
    n2.display();
    return 0;
}