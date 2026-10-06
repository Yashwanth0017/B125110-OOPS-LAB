#include<iostream>
using namespace std;

class Employee{
protected:
    int employeeID;
    string name;

public:
    // Constructor of Employee
    Employee(int id,string n){
        employeeID=id;
        name=n;
    }
};

class Developer:virtual public Employee{
protected:
    string language;

public:
    // Constructor of Developer
    Developer(int id,string n,string l):Employee(id,n){
        language=l;
    }
};

class Tester:virtual public Employee{
protected:
    string testingTool;

public:
    // Constructor of Tester
    Tester(int id,string n,string t):Employee(id,n){
        testingTool=t;
    }
};

class TechLead:public Developer,public Tester{
public:
    // Constructor of TechLead
    TechLead(int id,string n,string l,string t)
        :Employee(id,n),Developer(id,n,l),Tester(id,n,t){
    }

    void display(){
        cout<<"\nEmployee ID: "<<employeeID;
        cout<<"\nName: "<<name;
        cout<<"\nProgramming Language: "<<language;
        cout<<"\nTesting Tool: "<<testingTool<<endl;
    }
};

int main(){
    int employeeID;
    string name,language,testingTool;

    cout<<"Enter employee ID: ";
    cin>>employeeID;

    cout<<"Enter name: ";
    cin>>name;

    cout<<"Enter programming language: ";
    cin>>language;

    cout<<"Enter testing tool: ";
    cin>>testingTool;

    // Creating TechLead object
    TechLead t(employeeID,name,language,testingTool);

    t.display();

    return 0;
}