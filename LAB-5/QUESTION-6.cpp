#include <iostream>
using namespace std;
// Display an integer
void display(int x)
{
    cout << "Integer: " << x << endl;
}
// Display a floating-point number
void display(float x)
{
    cout << "Float: " << x << endl;
}
// Display a character
void display(char x)
{
    cout << "Character: " << x << endl;
}
// Display integer array
void display(int arr[], int n)
{
    cout << "Integer Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Display character array
void display(char arr[], int n)
{
    cout << "Character Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a = 10;
    float b = 5.5;
    char c = 'A';
    int arr1[] = {10, 20, 30, 40};
    char arr2[] = {'A', 'B', 'C', 'D'};
    display(a);
    display(b);
    display(c);
    display(arr1, 4);
    display(arr2, 4);
    return 0;
}