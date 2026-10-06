#include<iostream>
using namespace std;
class Employee{
protected:
    string name;
    double basicSalary;
public:
    Employee(string n,double b){
        name=n;
        basicSalary=b;
    }
};
class Developer:public Employee{
protected:
    int experience;
public:
    Developer(string n,double b,int e):Employee(n,b){
        experience=e;
    }
};
class SeniorDeveloper:public Developer{
    double projectBonus;

public:
    SeniorDeveloper(string n,double b,int e,double p):Developer(n,b,e){
        projectBonus=p;
    }

    void display(){
        double experienceBonus = 0.05* basicSalary* experience;
        double finalSalary=basicSalary + experienceBonus + projectBonus;
        cout<<"\nName: "<<name;
        cout<<"\nBasic Salary: "<<basicSalary;
        cout<<"\nExperience: "<<experience<<" years";
        cout<<"\nExperience Bonus: "<<experienceBonus;
        cout<<"\nProject Bonus: "<<projectBonus;
        cout<<"\nFinal Salary: "<<finalSalary<<endl;
    }
};

int main(){
    string name;
    double basicSalary,projectBonus;
    int experience;

    cout<<"Enter employee name: ";
    cin>>name;

    cout<<"Enter basic salary: ";
    cin>>basicSalary;

    cout<<"Enter experience in years: ";
    cin>>experience;

    cout<<"Enter project bonus: ";
    cin>>projectBonus;

    SeniorDeveloper s(name,basicSalary,experience,projectBonus);
    s.display();

    return 0;
}