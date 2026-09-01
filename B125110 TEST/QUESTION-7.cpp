#include <iostream>
#include<cctype>
using namespace std;
int main(){
 char text[200];
  cout << "Enter a sentence: ";
  cin >> text;
  char *p = text;
  int digits = 0;
  int alphabets = 0;
  int spaces = 0;
    while (*p != '\0') 
    { // Checking the conditions//
      if (isdigit(*p)) {
            digits++;
        }
     else if (isalpha(*p)) {
            alphabets++;
        }
     else if (*p == ' ') {
            spaces++;
        }
        p++;
    }
    cout << "Digits: " << digits << endl;
  cout << "Alphabets: " << alphabets << endl;
    cout << "Spaces: " << spaces << endl;
    return 0;
}