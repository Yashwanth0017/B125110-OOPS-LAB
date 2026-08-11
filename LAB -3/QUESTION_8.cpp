#include <iostream>
using namespace std;
class Student
{
    int roll, n;
    string name;
    float *marks;
public:
    void accept()
    {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter number of subjects: ";
        cin >> n;
        marks = new float[n];
        cout << "Enter marks: ";
        for(int i = 0; i < n; i++)
            cin >> marks[i];
    }
    void display()
    {
        float total = 0;
        int i;
        for( i = 0; i < n; i++)
            total += marks[i];
        cout << "\nRoll Number: " << roll;
        cout << "\nName: " << name;
        cout << "\nTotal Marks: " << total;
        cout << "\nAverage Marks: " << total / n;
    }
    void freeMemory()
    {
        delete[] marks;
    }
};
int main()
{
    Student s;
    s.accept();
    s.display();
    s.freeMemory();
    return 0;
}