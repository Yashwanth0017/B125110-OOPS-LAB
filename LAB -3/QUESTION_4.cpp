#include <iostream>
using namespace std;
int main()
{
    int n;
    float *a, sum = 0, average;
    cout << "Enter n: ";
    cin >> n;
    a = new float[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum = sum + a[i];
    }
    average = sum / n;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;
    delete[] a;
    return 0;
}