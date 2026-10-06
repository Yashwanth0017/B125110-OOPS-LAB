#include<iostream>
using namespace std;
class InternalExam{
protected:
    int internalMarks;

public:
    // Constructor of InternalExam
    InternalExam(int m){
        internalMarks=m;
    }

    void display(){
        cout<<"Internal Marks: "<<internalMarks<<endl;
    }
};

class ExternalExam{
protected:
    int externalMarks;

public:
    // Constructor of ExternalExam
    ExternalExam(int m){
        externalMarks=m;
    }

    void display(){
        cout<<"External Marks: "<<externalMarks<<endl;
    }
};

class FinalResult:public InternalExam,public ExternalExam{
public:
    // Constructor of FinalResult
    FinalResult(int i,int e):InternalExam(i),ExternalExam(e){}

    void show(){
        // Resolving ambiguity using scope resolution operator
        InternalExam::display();
        ExternalExam::display();

        cout<<"Total Marks: "<<internalMarks+externalMarks<<endl;
    }
};

int main(){
    int internalMarks,externalMarks;

    cout<<"Enter internal marks: ";
    cin>>internalMarks;

    cout<<"Enter external marks: ";
    cin>>externalMarks;

    // Creating FinalResult object
    FinalResult f(internalMarks,externalMarks);

    f.show();

    return 0;
}