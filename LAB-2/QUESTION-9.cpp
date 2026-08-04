#include <iostream>
using namespace std;
class StudentResult
{
    int roll, total;
    char name[50];
    int m1, m2, m3, m4, m5;
    float percentage;
    char grade;
public:
    // Input student details
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Marks in 5 Subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }
    // Calculate total, percentage and grade
    void calculate()
    {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5.0;
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else
            grade = 'F';
    }
    // Display result
    void display()
    {
        cout << "\n     Student Result      " << endl;
        cout << "Roll Number : " << roll << endl;
        cout << "Name        : " << name << endl;
        cout << "Total Marks : " << total << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
        cout << "Grade       : " << grade << endl;
    }
};
int main()
{
    StudentResult s;
    s.input();
    s.calculate();
    s.display();
    return 0;
}