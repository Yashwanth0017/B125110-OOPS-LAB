#include<iostream>
using namespace std;
class Diary{
    string name,last;
    int entries;
 public:
   void input(){
    cout << "Owner name :" << endl;
    cin >> name;
    cout << "Entries :"<< endl;
    cin >> entries;
    cout << "Last Entry :"<<endl;
    cin >> last;
   }
    friend void displayDiary(Diary d);
};
void displayDiary(Diary d){
    cout << "Owner :"<< d.name<<endl;
    cout << "Entries:"<< d.entries<<endl;
    cout << "Last Entry:"<< d.last <<endl;
}
 int main(){
    Diary d;
    d.input();
    displayDiary(d);
    return 0;
 }