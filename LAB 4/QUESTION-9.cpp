#include<iostream>
using namespace std;
class Result;
class Exam{
    string name,subject;
    float marks,maxmarks;
public:
    void input(){
        cin>>name>>subject>>marks>>maxmarks;
    }
    friend class Result;
};
class Result{
public:
    void display(Exam e){
        float percentage=e.marks/e.maxmarks*100;
        cout<<"Student: "<<e.name<<endl;
        cout<<"Subject: "<<e.subject<<endl;
        cout<<"Marks: "<<e.marks<<"/"<<e.maxmarks<<endl;
        cout<<"Percentage: "<<percentage<<"%"<<endl;

        if(percentage>=40)
            cout<<"Pass";
        else
            cout<<"Fail";
    }
};
int main(){
    Exam e;
    e.input();
    Result r;
    r.display(e);
}