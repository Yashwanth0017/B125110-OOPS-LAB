#include<iostream>
using namespace std;
class Product{
    string name;
    int price,quantity;
public:
    Product(string n="",int p=0,int q=0){
        name=n;
        price=p;
        quantity=q;
    }
    Product operator+(Product p){
        if(name==p.name&&price==p.price)
            return Product(name,price,quantity+p.quantity);
        cout<<"Products are different";
        return *this;
    }
    bool operator>(Product p){
        return price*quantity>p.price*p.quantity;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Quantity: "<<quantity<<endl;
        cout<<"Total value: "<<price*quantity;
    }
};
int main(){
    string n1,n2;
    int p1,q1,p2,q2;
    cout<<"Enter first product name,price,quantity: ";
    cin>>n1>>p1>>q1;
    cout<<"Enter second product name,price,quantity: ";
    cin>>n2>>p2>>q2;
    Product p1obj(n1,p1,q1);
    Product p2obj(n2,p2,q2);
    Product p3 = p1obj + p2obj;
    cout<<"After addition:"<<endl;
    p3.display();
    cout<<endl;
    if(p1obj>p2obj)
        cout<<"First product has higher total value";
    else if(p2obj>p1obj)
        cout<<"Second product has higher total value";
    else
        cout<<"Both products have equal total value";
    return 0;
}