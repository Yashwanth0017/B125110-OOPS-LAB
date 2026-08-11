#include <iostream>
using namespace std;
class Product
{
    int id, quantity;
    string name;
    float price;
public:
    void accept()
    {
        cin >> id >> name >> price >> quantity;
    }
    void display()
    {
        cout << id << " " << name << " "<< price << " " << quantity << endl;
    }
    float cost()
    {
        return price * quantity;
    }

    int getQuantity()
    {
        return quantity;
    }
};
int main()
{
    int n,i, totalQuantity = 0;
    float totalCost = 0;
    cout << "Enter number of products: ";
    cin >> n;
    Product *p = new Product[n];
    for(i = 0; i < n; i++)
        p[i].accept();
    cout << "\nProducts:\n";
    for(i = 0; i < n; i++)
    {
        p[i].display();
        totalCost += p[i].cost();
        totalQuantity += p[i].getQuantity();
    }
    cout << "Total Cost = " << totalCost << endl;
    cout << "Total Quantity = " << totalQuantity;
    delete[] p;
    return 0;
}