#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Student {
    int roll_number;
    char name[50];
    struct Date dob;
};
int main() {
    struct Student s;
    printf("Enter Student Details:\n");
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_number);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Date of Birth: ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);
    printf("\n Student Information \n");
    printf("Roll Number: %d\n", s.roll_number);
    printf("Name: %s\n", s.name);
    printf("DOB: %02d/%02d/%04d\n", s.dob.day, s.dob.month, s.dob.year);
    return 0;
}