#include <iostream>
using namespace std;
class Calculator{
    float a, b;
public:
void input(){
     cout << "Enter first number: ";
     cin >> a;
     cout << "Enter second number: ";
      cin >> b;
    }
 void add(){
    cout << "Addition = " << a + b << endl;
    }
void subtract(){
     cout << "Subtraction = " << a - b << endl;
    }
void multiply(){
        cout << "Multiplication = " << a * b << endl;
    }
void divide(){
        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division not possible." << endl;
    }
};
int main()
{
    Calculator c;
    c.input();
    c.add();
    c.subtract();
    c.multiply();
    c.divide();
    return 0;
}