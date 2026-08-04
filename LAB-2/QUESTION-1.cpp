#include<iostream>
using namespace std;
class  student{
  private:  
    int roll;
    char name[50];
    float marks;
  public: 
    void input()
   {
    cout << "Enter Roll Number : ";
    cin >> roll;
    cout << "Enter Name :";
    cin >> name;
    cout << "Enter Marks: ";
    cin >> marks;
   }
    void display()
  {
    cout << "\n    STUDENT DATA    "<< endl;
    cout << "ROLL NO : " << roll << endl;
    cout << "NAME    : " << name << endl;
    cout << "MARKS   : " << marks << endl;
  }
};
int main(){
    student s1;
    s1.input();
    s1.display();
    return 0;
}


