#include <iostream>
using namespace std;
class LibraryBook
{
private:
    int bookId, days;
    char bookTitle[50], studentName[50];
    float fine;
public:
    // Input book details
    void input()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cout << "Enter Book Title: ";
        cin >> bookTitle;
        cout << "Enter Student Name: ";
        cin >> studentName;
        cout << "Enter Days Issued: ";
        cin >> days;
    }
    // Calculate fine
    void calculateFine()
    {
        if(days > 15)
            fine = (days - 15) * 2;
        else
            fine = 0;
    }
    // Display details
    void display()
    {
        cout << "\nBook ID: " << bookId << endl;
        cout << "Book Title: " << bookTitle << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Days Issued: " << days << endl;
        cout << "Fine: " << fine << endl;
    }
};
  int main(){
    LibraryBook b;
    b.input();           // Read details
    b.calculateFine();   // Calculate fine
    b.display();         // Show details
    return 0;
}