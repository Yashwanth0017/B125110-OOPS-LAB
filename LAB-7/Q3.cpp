// multilevel inheritance
#include<iostream>
using namespace std;
class Vehicle{
protected:
    string registrationNo;
    int rentalDays;

public:
    // Constructor of Vehicle
    Vehicle(string r,int d){
        registrationNo=r;
        rentalDays=d;
    }
};

class Car:public Vehicle{
protected:
    double dailyRate;

public:
    // Constructor of Car
    Car(string r,int d,double rate):Vehicle(r,d){
        dailyRate=rate;
    }
};

class LuxuryCar:public Car{
    double luxuryCharge;

public:
    // Constructor of LuxuryCar
    LuxuryCar(string r,int d,double rate,double charge):Car(r,d,rate){
        luxuryCharge=charge;
    }

    void display(){
        double totalCost=(dailyRate+luxuryCharge)*rentalDays;

        cout<<"\nRegistration Number: "<<registrationNo;
        cout<<"\nRental Days: "<<rentalDays;
        cout<<"\nDaily Rental Rate: "<<dailyRate;
        cout<<"\nLuxury Charge per Day: "<<luxuryCharge;
        cout<<"\nTotal Rental Cost: "<<totalCost<<endl;
    }
};

int main(){
    string registrationNo;
    int rentalDays;
    double dailyRate,luxuryCharge;

    cout<<"Enter registration number: ";
    cin>>registrationNo;

    cout<<"Enter rental days: ";
    cin>>rentalDays;

    cout<<"Enter daily rental rate: ";
    cin>>dailyRate;

    cout<<"Enter luxury charge per day: ";
    cin>>luxuryCharge;

    // Creating LuxuryCar object
    LuxuryCar car(registrationNo,rentalDays,dailyRate,luxuryCharge);

    car.display();

    return 0;
}