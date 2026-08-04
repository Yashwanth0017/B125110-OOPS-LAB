#include <iostream>
using namespace std;
class Product
{
private:
    int productId, quantity;
    char productName[50];
    float price;
public:
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> productId;
        cout << "Enter Product Name: ";
        cin >> productName;
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Price per Unit: ";
        cin >> price;
    }
    void sell()
    {
        int sold;
        cout << "Enter Quantity Sold: ";
        cin >> sold;
        if (sold <= quantity)
        {
            quantity -= sold;
            cout << "Sale Successful!" << endl;
        }
        else
        {
            cout << "Insufficient Stock" << endl;
        }
    }
void display()
    {
        cout << "\nProduct Details " << endl;
        cout << "Product ID      : " << productId << endl;
        cout << "Product Name    : " << productName << endl;
        cout << "Quantity Left   : " << quantity << endl;
        cout << "Price per Unit  : " << price << endl;
        cout << "Inventory Value : " << quantity * price << endl;
    }
};
int main()
{
    Product p;
    p.input();
    p.sell();
    p.display();
    return 0;
}