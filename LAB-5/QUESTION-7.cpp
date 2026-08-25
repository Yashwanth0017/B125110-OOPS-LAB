#include <iostream>
using namespace std;
// Compare two integers
void compare(int a, int b)
{
    if (a > b)
        cout << "Larger integer: " << a << endl;
    else if (b > a)
        cout << "Larger integer: " << b << endl;
    else
        cout << "Both integers are equal" << endl;
}
// Compare two floating-point numbers
void compare(float a, float b)
{
    if (a > b)
        cout << "Larger float: " << a << endl;
    else if (b > a)
        cout << "Larger float: " << b << endl;
    else
        cout << "Both floats are equal" << endl;
}
// Compare two integer arrays
void compare(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << "Arrays are not identical" << endl;
            return;
        }
    }
    cout << "Arrays are identical" << endl;
}
int main()
{
    int x = 10, y = 20;
    float p = 5.5, q = 3.5;
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {1, 2, 3, 4};
    compare(x, y);
    compare(p, q);
    compare(arr1, arr2, 4);
    return 0;
}