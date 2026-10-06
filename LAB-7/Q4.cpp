//hierarchy inheritance
#include<iostream>
using namespace std;

class BankAccount{
protected:
    int accountNo;
    double balance;

public:
    // Constructor of BankAccount
    BankAccount(int a,double b){
        accountNo=a;
        balance=b;
    }
};

class SavingsAccount:public BankAccount{
    double interestRate;

public:
    // Constructor of SavingsAccount
    SavingsAccount(int a,double b,double r):BankAccount(a,b){
        interestRate=r;
    }

    void display(){
        double interest=balance*interestRate/100;
        double updatedBalance=balance+interest;

        cout<<"\nSavings Account";
        cout<<"\nAccount Number: "<<accountNo;
        cout<<"\nOriginal Balance: "<<balance;
        cout<<"\nInterest: "<<interest;
        cout<<"\nUpdated Balance: "<<updatedBalance<<endl;
    }
};

class CurrentAccount:public BankAccount{
    double minBalance;
    double maintenanceCharge;

public:
    // Constructor of CurrentAccount
    CurrentAccount(int a,double b,double m,double c):BankAccount(a,b){
        minBalance=m;
        maintenanceCharge=c;
    }

    void display(){
        double updatedBalance=balance;

        if(balance<minBalance)
            updatedBalance=balance-maintenanceCharge;

        cout<<"\nCurrent Account";
        cout<<"\nAccount Number: "<<accountNo;
        cout<<"\nOriginal Balance: "<<balance;
        cout<<"\nUpdated Balance: "<<updatedBalance<<endl;
    }
};

int main(){
    int accountNo,choice;
    double balance,interestRate,minBalance,maintenanceCharge;

    cout<<"Enter account number: ";
    cin>>accountNo;

    cout<<"Enter balance: ";
    cin>>balance;

    cout<<"Enter 1 for Savings Account";
    cout<<"\nEnter 2 for Current Account: ";
    cin>>choice;

    if(choice==1){
        cout<<"Enter interest rate: ";
        cin>>interestRate;

        // Creating SavingsAccount object
        SavingsAccount s(accountNo,balance,interestRate);
        s.display();
    }
    else if(choice==2){
        cout<<"Enter minimum balance: ";
        cin>>minBalance;

        cout<<"Enter maintenance charge: ";
        cin>>maintenanceCharge;

        // Creating CurrentAccount object
        CurrentAccount c(accountNo,balance,minBalance,maintenanceCharge);
        c.display();
    }
    else{
        cout<<"Invalid choice";
    }

    return 0;
}