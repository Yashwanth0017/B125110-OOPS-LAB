#include <iostream>
using namespace std;
int larger(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
float larger(float a, float b)
{
    if (a > b)
        return a;
    else
        return b;
}
int larger(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}
int main()
{
    cout << "Larger of 10 and 20 = " << larger(10, 20) << endl;
    cout << "Larger of 5.5 and 3.2 = "
         << larger(5.5f, 3.2f) << endl;
    cout << "Largest of 10, 50 and 30 = "
         << larger(10, 50, 30) << endl;
    return 0;
}