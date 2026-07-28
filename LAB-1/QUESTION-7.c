#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marksC;
    float marksMaths;
    float marksPhysics;
    };
int main() {
    struct Student s;
    float total, average;
    printf("Enter student details:\n");
    printf("Roll Number: ");
    scanf("%d", &s.rollNumber);
    printf("Name: ");
    scanf(" %[^\n]", s.name);
    printf("Marks in C: ");
    scanf("%f", &s.marksC);
    printf("Marks in Mathematics: ");
    scanf("%f", &s.marksMaths);
    printf("Marks in Physics: ");
    scanf("%f", &s.marksPhysics);
        total = s.marksC + s.marksMaths + s.marksPhysics;
        average = total / 3.0;
     printf("\nStudent Marksheet\n");
     printf("Roll Number : %d\n", s.rollNumber);
     printf("Name: %s\n", s.name);
     printf("Total Marks : %.2f\n", total);
     printf("Average     : %.2f\n", average);
      return 0;
}