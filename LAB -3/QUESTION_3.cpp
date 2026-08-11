#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "Enter n:";
    cin >> n;
    int*a=new int[n];
    cout << "Enter Elemets:";
    for(i=0;i<n;i++){
        cin >> a[i];
    }
        int largest =a[0];
    
        for(i=0;i<n;i++){
            if(a[i]>largest){
                largest = a[i];
            }
        }
            cout <<"Largest = "<< largest;
            
        delete[] a;
        return 0;
    }


