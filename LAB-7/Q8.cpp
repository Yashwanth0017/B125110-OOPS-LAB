#include<iostream>
using namespace std;

class Patient{
protected:
    string name;
    int patientID;
    int age;

public:
    // Constructor of Patient
    Patient(string n,int id,int a){
        name=n;
        patientID=id;
        age=a;
    }
};

class InPatient:public Patient{
    double roomCharges;
    int days;

public:
    // Constructor of InPatient
    InPatient(string n,int id,int a,double r,int d):Patient(n,id,a){
        roomCharges=r;
        days=d;
    }

    void display(){
        double totalBill=roomCharges*days;

        cout<<"\nPatient Name: "<<name;
        cout<<"\nPatient ID: "<<patientID;
        cout<<"\nAge: "<<age;
        cout<<"\nRoom Charges per Day: "<<roomCharges;
        cout<<"\nNumber of Days: "<<days;
        cout<<"\nTotal Hospital Bill: "<<totalBill<<endl;
    }
};

int main(){
    string name;
    int patientID,age,days;
    double roomCharges;

    cout<<"Enter patient name: ";
    cin>>name;

    cout<<"Enter patient ID: ";
    cin>>patientID;

    cout<<"Enter age: ";
    cin>>age;

    cout<<"Enter room charges per day: ";
    cin>>roomCharges;

    cout<<"Enter number of days: ";
    cin>>days;

    // Creating InPatient object
    InPatient p(name,patientID,age,roomCharges,days);

    p.display();

    return 0;
}