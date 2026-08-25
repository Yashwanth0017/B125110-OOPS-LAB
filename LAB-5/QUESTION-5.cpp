#include <iostream>
using namespace std;
// Add value to an integer
void modify(int &x, int value)
{
    cout << "Before: " << x << endl;
    x = x + value;
    cout << "After: " << x << endl;
}
// Add value to a floating-point number
void modify(float &x, float value)
{
    cout << "Before: " << x << endl;
    x = x + value;
    cout << "After: " << x << endl;
}
// Modify integer using pointer
void modify(int *x, int value)
{
    cout << "Before: " << *x << endl;
    *x += value;
    cout << "After: " << *x << endl;
}
int main()
{
    int a = 10;
    float b = 5.5;
    int c = 20;
    cout << "Integer:" << endl;
    modify(a, 5);
    cout << "\nFloat:" << endl;
    modify(b, 2.5);
    cout << "\nPointer:" << endl;
    modify(&c, 10);
    return 0;
}