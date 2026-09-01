#include <iostream>
using namespace std;
void addMarks(int *p, int n) {
  for (int i = 0; i < n; i++) {
        *p = *p + 5;
        p++;
  }
}
int main() {
 int n;
 int i;
 cout << "Enter number of students: ";
 cin >> n;
 int marks[n];
 cout << "Enter marks:" << endl;
 for (i = 0; i < n; i++) {
    cin >> *(marks + i);
  }
  cout << "Before update:" << endl;
  for (i = 0; i < n; i++) {
     cout << *(marks + i) << " ";
    }
  addMarks(marks, n);
    cout << "\nAfter adding 5 marks:" << endl;
   for (i = 0; i < n; i++) {
        cout << *(marks + i) << " ";
    }
return 0;
}