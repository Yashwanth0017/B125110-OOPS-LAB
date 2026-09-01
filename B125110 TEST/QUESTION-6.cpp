#include <iostream>
using namespace std;
 void longestDuration(int *p,int n) {
  int longest = *p;
  int i;
    for (i = 1; i < n; i++) {
           p++;
        if (*p > longest) {
            longest = *p;
        }
    }
 cout << "Longest episode duration:"
         << longest << endl;
}
int main(){
 int duration[6];
 int i;
 cout <<"Enter durations of 6 episodes:"<< endl;
 for (i = 0; i < 6; i++) {
   cin >> *(duration + i);
    }
   longestDuration(duration,6);
    return 0;
}