#include <iostream>
using namespace std;
class Employee
{
    int id;
    string name;
    float salary;
public:
    void accept()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    int n,i;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee *e = new Employee[n];
    for( i = 0; i < n; i++){
        e[i].accept();
    }
    cout << "\nEmployee Details:\n";
    for( i = 0; i < n; i++){
        e[i].display();
    }
    delete[] e;
    return 0;
}