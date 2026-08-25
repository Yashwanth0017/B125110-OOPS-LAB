#include <iostream>
using namespace std;
// Count digits in an integer
void count(int n)
{
    int digits = 0;
    if (n == 0)
        digits = 1;
    else
    {
        while (n != 0)
        {
            digits++;
            n = n / 10;
        }
    }
    cout << "Number of digits: " << digits << endl;
}
// Count elements in an integer array
void count(int arr[], int n)
{
    cout << "Number of elements: " << n << endl;
}
// Count occurrences of a character
void count(char arr[], int n, char ch)
{
    int occurrences = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ch)
            occurrences++;
    }
    cout << "Occurrences of " << ch << ": " << occurrences << endl;
}
int main()
{
    int num = 12345;
    int arr[] = {10, 20, 30, 40, 50};
    char ch[] = {'A', 'B', 'A', 'C', 'A'};
    count(num);
    count(arr, 5);
    count(ch, 5, 'A');
    return 0;
}