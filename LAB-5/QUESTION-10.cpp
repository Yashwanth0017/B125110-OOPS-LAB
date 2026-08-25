#include <iostream>
using namespace std;
// Sum of two integers
void process(int a, int b)
{
    cout << "Sum of two integers: " << a + b << endl;
}
// Sum of integer and float
void process(int a, float b)
{
    cout << "Sum of integer and float: " << a + b << endl;
}
// Sum of two floats
void process(float a, float b)
{
    cout << "Sum of two floats: " << a + b << endl;
}
// Sum of all elements in an integer array
void process(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum of array: " << sum << endl;
}
// Sum of values using two integer pointers
void process(int *a, int *b)
{
    cout << "Sum using pointers: " << *a + *b << endl;
}
int main()
{
    int a = 10, b = 20;
    float x = 5.5, y = 2.5;
    int arr[] = {10, 20, 30, 40};
    int p = 50, q = 30;
    process(a, b);
    process(a, x);
    process(x, y);
    process(arr, 4);
    process(&p, &q);
    return 0;
}