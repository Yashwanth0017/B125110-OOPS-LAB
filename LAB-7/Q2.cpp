#include<iostream> // hierarchy inheritance
using namespace std;
class Student{
protected:
    string name;
    int rollNo;
    int marks;
public:
    // Constructor of Student
    Student(string n,int r,int m){
        name=n;
        rollNo=r;
        marks=m;
    }
    // Base class function
      void calculateResult(){
        cout<<"Total Marks: "<<marks<<endl;
    }
};
class RegularStudent:public Student{
public:
    // Constructor of RegularStudent
    RegularStudent(string n,int r,int m):Student(n,r,m){}

    // Overriding calculateResult()
    void calculateResult() {
        cout<<"\nRegular Student";
        cout<<"\nName: "<<name;
        cout<<"\nRoll No: "<<rollNo;
        cout<<"\nTotal Marks: "<<marks<<endl;
    }
};

class ScholarshipStudent:public Student{
public:
    // Constructor of ScholarshipStudent
    ScholarshipStudent(string n,int r,int m):Student(n,r,m){}

    // Overriding calculateResult()
    void calculateResult(){
        int total=marks+5;

        cout<<"\nScholarship Student";
        cout<<"\nName: "<<name;
        cout<<"\nRoll No: "<<rollNo;
        cout<<"\nTotal Marks: "<<total<<endl;
    }
};

int main(){
    string name;
    int rollNo,marks,choice;

    cout<<"Enter name: ";
    cin>>name;

    cout<<"Enter roll number: ";
    cin>>rollNo;

    cout<<"Enter marks: ";
    cin>>marks;

    cout<<"Enter 1 for Regular Student";
    cout<<"\nEnter 2 for Scholarship Student: ";
    cin>>choice;

    if(choice==1){
        RegularStudent s(name,rollNo,marks);
        s.calculateResult();
    }
    else if(choice==2){
        ScholarshipStudent s(name,rollNo,marks);
        s.calculateResult();
    }
    else{
        cout<<"Invalid choice";
    }

    return 0;
}