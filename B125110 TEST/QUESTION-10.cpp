#include <iostream>
using namespace std;
int main() {
    int n;
    int i;
    cout << "Enter number of contacts: ";
    cin >> n;
    int *contact = new int[n];
    cout << "Enter contact numbers:\n";
    for (i = 0; i < n; i++) {
        cin >> *(contact + i);
    }
    int search;
    cout << "Enter contact number to search: ";
    cin >> search;
    bool found = false;
    for (i = 0; i < n; i++) {
        if (*(contact + i) == search) {
            cout << "Contact found at position: " << i + 1;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Contact not found";
    }
    delete[] contact;
    return 0;
}