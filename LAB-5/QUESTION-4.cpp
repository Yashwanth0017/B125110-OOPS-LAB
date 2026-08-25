#include <iostream>
using namespace std;
int i;
void search(int arr[], int n, int key)
{
    for ( i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at position: " << i + 1 << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}
void search(char arr[], int n, char key)
{
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Character found at position: " << i + 1 << endl;
            return;
        }
    }
    cout << "Character not found" << endl;
}
void search(int arr[], int start, int end, int key)
{
    for ( i = start; i <= end; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at position: " << i + 1 << endl;
            return;
        }
    }
    cout << "Element not found in the specified range" << endl;
}
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    char b[] = {'A', 'B', 'C', 'D', 'E'};
    search(a, 5, 30);          // Integer search
    search(b, 5, 'C');         // Character search
    search(a, 1, 3, 40);       // Range search
    return 0;
}