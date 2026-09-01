#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of tables: ";
    cin >> n;
    int *table = new int[n];
    cout << "Enter table numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(table + i);
    }
    int smallest = *table;
    for (int i = 1; i < n; i++) {
        if (*(table + i) < smallest) {
            smallest = *(table + i);
        }
    }
    cout << "Smallest table number: " << smallest;
    delete[] table;
    return 0;
}