#include<iostream>
using namespace std;

class Person{
protected:
    string name;
    int age;

public:
    // Constructor of Person
    Person(string n,int a){
        name=n;
        age=a;
    }
};

class Student:virtual public Person{
protected:
    int rollNo;
    double cgpa;

public:
    // Constructor of Student
    Student(string n,int a,int r,double c):Person(n,a){
        rollNo=r;
        cgpa=c;
    }
};

class Employee:virtual public Person{
protected:
    int employeeID;
    double salary;

public:
    // Constructor of Employee
    Employee(string n,int a,int e,double s):Person(n,a){
        employeeID=e;
        salary=s;
    }
};

class TeachingAssistant:public Student,public Employee{
public:
    // Constructor of TeachingAssistant
    TeachingAssistant(string n,int a,int r,double c,int e,double s)
        :Person(n,a),Student(n,a,r,c),Employee(n,a,e,s){}

    void display(){
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
        cout<<"\nRoll No: "<<rollNo;
        cout<<"\nCGPA: "<<cgpa;
        cout<<"\nEmployee ID: "<<employeeID;
        cout<<"\nSalary: "<<salary<<endl;
    }
};

int main(){
    string name;
    int age,rollNo,employeeID;
    double cgpa,salary;

    cout<<"Enter name: ";
    cin>>name;

    cout<<"Enter age: ";
    cin>>age;

    cout<<"Enter roll number: ";
    cin>>rollNo;

    cout<<"Enter CGPA: ";
    cin>>cgpa;

    cout<<"Enter employee ID: ";
    cin>>employeeID;

    cout<<"Enter salary: ";
    cin>>salary;

    // Creating TeachingAssistant object
    TeachingAssistant t(name,age,rollNo,cgpa,employeeID,salary);

    t.display();

    return 0;
}