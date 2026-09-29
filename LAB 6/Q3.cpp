#include<iostream>
using namespace std;
class Student{
    string name;
    int marks;
public:
    Student(string n="",int m=0){
        name=n;
        marks=m;
    }
    bool operator>(Student s){
        return marks>s.marks;
    }
    void display(){
        cout<<name<<" has higher marks";
    }
};
int main(){
    string n1,n2;
    int m1,m2;
    cout<<"Enter first student name and marks: ";
    cin>>n1>>m1;
    cout<<"Enter second student name and marks: ";
    cin>>n2>>m2;
    Student s1(n1,m1);
    Student s2(n2,m2);
    if(s1>s2)
        s1.display();
    else
        s2.display();
    return 0;
}