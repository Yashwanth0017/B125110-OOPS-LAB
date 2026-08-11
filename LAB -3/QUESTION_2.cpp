#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "Enter n:";
    cin >> n;
    int *a=new int[n];
    cout << "Enter elements:";
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    cout << "Elements:";
    for(i=0;i<n;i++){
        cout << a[i]<<" ";
    }
        delete[] a;
    return 0;
}