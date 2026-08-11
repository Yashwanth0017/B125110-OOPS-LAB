#include<iostream>
using namespace std;
int main(){
    int*p=new int;
    cout << "Enter a number :";
    cin >> *p;
    cout << "Value = "<< *p;
    delete p;
    return 0;
}