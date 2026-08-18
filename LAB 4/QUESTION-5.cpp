#include<iostream>
using namespace std;
class FoodOrder{
    int id,quantity;
    string food;
    float price;
public:
    void input(){
        cout << "Enter Order id:";
        cin >> id;
        cout << "Enter Food:";
        cin >> food;
        cout << "Enter Quantity:";
        cin >> quantity;
        cout <<"Price:";
        cin >> price;
    }
    friend void calculateBill(FoodOrder f);
};
void calculateBill(FoodOrder f){
    cout <<"     BILL       "<< endl;     
    cout<<"Order ID: "<<f.id<<endl;
    cout<<"Food: "<<f.food<<endl;
    cout<<"Quantity: "<<f.quantity<<endl;
    cout<<"Price: "<<f.price<<endl;
    cout<<"Total Bill: "<<f.quantity*f.price;
}
int main(){
    FoodOrder f;
    f.input();
    calculateBill(f);
}