#include<iostream>
using namespace std;

class Person{
protected:
    string name;

public:
    // Constructor of Person
    Person(string n){
        name=n;
        cout<<"Person constructor"<<endl;
    }
};

class Employee:public Person{
protected:
    int employeeID;

public:
    // Constructor of Employee
    Employee(string n,int id):Person(n){
        employeeID=id;
        cout<<"Employee constructor"<<endl;
    }
};

class Manager:public Employee{
    double salary;

public:
    // Constructor of Manager
    Manager(string n,int id,double s):Employee(n,id){
        salary=s;
        cout<<"Manager constructor"<<endl;
    }

    void display(){
        cout<<"\nName: "<<name;
        cout<<"\nEmployee ID: "<<employeeID;
        cout<<"\nSalary: "<<salary<<endl;
    }
};

int main(){
    string name;
    int employeeID;
    double salary;

    cout<<"Enter name: ";
    cin>>name;

    cout<<"Enter employee ID: ";
    cin>>employeeID;

    cout<<"Enter salary: ";
    cin>>salary;

    // Creating Manager object
    Manager m(name,employeeID,salary);

    cout<<"\nEmployee Information:"<<endl;
    m.display();

    return 0;
}