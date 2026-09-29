#include<iostream>
using namespace std;
class Temperature{
    int celsius;
public:
    Temperature(int c=0){
        celsius=c;
    }
    bool operator<(Temperature t){
        return celsius<t.celsius;
    }
    bool operator>(Temperature t){
        return celsius>t.celsius;
    }
};
int main(){
    int t1,t2;
    cout<<"Enter first temperature: ";
    cin>>t1;
    cout<<"Enter second temperature: ";
    cin>>t2;
    Temperature temp1(t1);
    Temperature temp2(t2);
    if(temp1<temp2)
        cout<<"First temperature is lower";
    else if(temp1>temp2)
        cout<<"First temperature is higher";
    else
        cout<<"Both temperatures are equal";
    return 0;
}