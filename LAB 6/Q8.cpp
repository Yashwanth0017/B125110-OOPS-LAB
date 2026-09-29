#include<iostream>
using namespace std;
class Item{
    string name;
    int price,quantity;
public:
    Item(string n="",int p=0,int q=0){
        name=n;
        price=p;
        quantity=q;
    }
    Item operator+(Item i){
        if(name==i.name&&price==i.price)
            return Item(name,price,quantity+i.quantity);
        cout<<"Items are different";
        return *this;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Quantity: "<<quantity;
    }
};
int main(){
    string n1,n2;
    int p1,q1,p2,q2;
    cout<<"Enter first item name,price,quantity: ";
    cin>>n1>>p1>>q1;
    cout<<"Enter second item name,price,quantity: ";
    cin>>n2>>p2>>q2;
    Item i1(n1,p1,q1);
    Item i2(n2,p2,q2);
    Item i3=i1+i2;
    cout<<"Result:"<<endl;
    i3.display();
    return 0;
}