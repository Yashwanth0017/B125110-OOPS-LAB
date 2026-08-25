#include <iostream>
using namespace std;
int total(int a[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum = sum + a[i];

    return sum;
}
float total(float a[], int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
        sum = sum + a[i];

    return sum;
}
int total(int a[], int n, int x)
{
    int sum = 0;

    for (int i = 0; i < x; i++)
        sum = sum + a[i];

    return sum;
}
int main()
{
    int a[] = {10, 20, 30, 40};
    float b[] = {1.5, 2.5, 3.5};
    cout << "Integer array total = "
         << total(a, 4) << endl;

    cout << "Float array total = "
         << total(b, 3) << endl;

    cout << "First 2 elements total = "
         << total(a, 4, 2) << endl;
    return 0;
}