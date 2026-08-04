#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length, breadth;
public:
    void input()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
    void display()
    {
        float area = length * breadth;
        float perimeter = 2 * (length + breadth);

        cout << "Area = " << area << endl;
        cout << "Perimeter = " << perimeter << endl;
    }
};
int main()
{
    Rectangle r;
    r.input();
    r.display();
    return 0;
}