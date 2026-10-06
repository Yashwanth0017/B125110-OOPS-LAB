// Multiple inheritance 
#include<iostream>
using namespace std;
class Academic{
protected:
    int m1,m2,m3;

public:
    // Constructor of Academic
    Academic(int a,int b,int c){
        m1=a;
        m2=b;
        m3=c;
    }
};

class Sports{
protected:
    int sportsMarks;

public:
    // Constructor of Sports
    Sports(int s){
        sportsMarks=s;
    }
};

class StudentResult:public Academic,public Sports{
public:
    // Constructor of StudentResult
    StudentResult(int a,int b,int c,int s):Academic(a,b,c),Sports(s){}

    void display(){
        int total=m1+m2+m3+sportsMarks;
        double average=total/4.0;

        cout<<"\nAcademic Marks: "<<m1<<" "<<m2<<" "<<m3;
        cout<<"\nSports Marks: "<<sportsMarks;
        cout<<"\nTotal Marks: "<<total;
        cout<<"\nAverage: "<<average<<endl;
    }
};

int main(){
    int m1,m2,m3,sportsMarks;

    cout<<"Enter marks in subject 1: ";
    cin>>m1;

    cout<<"Enter marks in subject 2: ";
    cin>>m2;

    cout<<"Enter marks in subject 3: ";
    cin>>m3;

    cout<<"Enter sports marks: ";
    cin>>sportsMarks;

    // Creating StudentResult object
    StudentResult s(m1,m2,m3,sportsMarks);
    s.display();
    return 0;
}