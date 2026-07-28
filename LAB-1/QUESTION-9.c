#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float cgpa;
};
int main() {
    struct Student students[5];
    printf("Enter details for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter CGPA: ");
        scanf("%f", &students[i].cgpa);
    }
    printf("\n Students with CGPA >= 8.0 \n");
    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (students[i].cgpa >= 8.0) {
            printf("Roll Number: %d, Name: %s, CGPA: %.2f\n", 
                 students[i].rollNumber, students[i].name, students[i].cgpa);
            found = 1;
        }
    }
    if (!found) {
        printf("No students found with CGPA of 8.0 or above \n");
    }
    return 0;
}