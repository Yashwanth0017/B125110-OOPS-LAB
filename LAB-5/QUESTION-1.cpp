#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
float add(float a, float b)
{
    return a + b;
}
int main()
{
    cout << "Two integers: " << add(10, 20) << endl;
    cout << "Three integers: " << add(10, 20, 30) << endl;
    cout << "Two floats: " << add(2.6f,3.2f) << endl;

    return 0;
}