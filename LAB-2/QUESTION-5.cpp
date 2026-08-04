#include <iostream>
using namespace std;
class Employee{
private:
    int empId;
    string empName;
    float basicSalary, hra, da, grossSalary;
public:
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
    void calculate()
    {
        hra = basicSalary * 0.20;
        da = basicSalary * 0.10;
        grossSalary = basicSalary + hra + da;
    }
    void display()
    {
        cout << "\nEmployee Details " << endl;
        cout << "Employee ID   : " << empId << endl;
        cout << "Employee Name : " << empName << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA           : " << hra << endl;
        cout << "DA            : " << da << endl;
        cout << "Gross Salary  : " << grossSalary << endl;
    }
};
int main()
{
    Employee e;
    e.input();
    e.calculate();
    e.display();
    return 0;
}