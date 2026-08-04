#include <iostream>
using namespace std;
class ElectricityBill
{
    int consumerNo, units;
    char consumerName[50];
    float bill;
public:
    // Input consumer details
    void input()
    {
        cout << "Enter Consumer Number: ";
        cin >> consumerNo;
        cout << "Enter Consumer Name: ";
        cin >> consumerName;
        cout << "Enter Units Consumed: ";
        cin >> units;
    }
    // Calculate electricity bill
    void calculate()
    {
        if (units <= 100)
            bill = units * 5;
        else if (units <= 200)
            bill = (100 * 5) + (units - 100) * 7;
        else
            bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    // Display bill
    void display()
    {
        cout << "\n     Electricity Bill       " << endl;
        cout << "Consumer Number : " << consumerNo << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Units Consumed  : " << units << endl;
        cout << "Total Bill      : " << bill << endl;
    }
};
int main()
{
    ElectricityBill e;
    e.input();
    e.calculate();
    e.display();
    return 0;
}