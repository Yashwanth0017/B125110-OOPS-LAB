#include<iostream>
using namespace std;
class Distance{
 public :
    int feet;
    int inches;
 void input(){
    cout << "Enter feet :";
    cin >> feet;
    cout << "Enter inches :";
    cin >> inches;
 }
 void add(Distance d1,Distance d2){
   feet = d1.feet + d2.feet;
   inches = d1.inches + d2.inches;
   if (inches>=12){
    feet+=inches / 12;
    inches=inches % 12;
   }
}
void display()
    {
        cout << "\nTotal Distance = " << feet << " ft " << inches << " in" << endl;
    }
};
int main()
{
    Distance d1, d2, d3;
    cout << "Enter First Distance\n";
    d1.input();
    cout << "\nEnter Second Distance\n";
    d2.input();
    d3.add(d1, d2);
    d3.display();
    return 0;
}