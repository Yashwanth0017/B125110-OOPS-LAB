#include<iostream>
using namespace std;
class Employee
{
    int id,n;
    string name;
    float salary,*earnings;
public:
    void accept()
    {
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter basic salary: ";
        cin>>salary;
        cout<<"Enter number of months: ";
        cin>>n;
        earnings=new float[n];
        cout<<"Enter monthly earnings: ";
        for(int i=0;i<n;i++)
            cin>>earnings[i];
    }
    void display()
    {
        float total=0;
        int max=0;
        for(int i=0;i<n;i++)
        {
            total+=earnings[i];
            if(earnings[i]>earnings[max])
                max=i;
        }
        cout<<"\nEmployee ID: "<<id;
        cout<<"\nEmployee Name: "<<name;
        cout<<"\nBasic Salary: "<<salary;
        cout<<"\nTotal Earnings: "<<total;
        cout<<"\nAverage Earnings: "<<total/n;
        cout<<"\nHighest Earning Month: "<<max+1;
        cout<<"\nHighest Earning: "<<earnings[max];
    }
    void freeMemory()
    {
        delete[] earnings;
    }
};
int main()
{
    Employee e;
    e.accept();
    e.display();
    e.freeMemory();
    return 0;
}