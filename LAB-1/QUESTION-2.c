#include <stdio.h>
struct Employee {
    int employeeID;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp[3];
    int i;
    for ( i = 0; i < 3; i++) {
    printf("\nEnter details for Employee %d:\n", i + 1);
    printf("Enter Employee ID: ");
    scanf("%d", &emp[i].employeeID);
    printf("Enter Name: ");
    scanf(" %[^\n]s", emp[i].name);
    printf("Enter Salary: ");
    scanf("%f", &emp[i].salary);
    }
    printf("\n Employee Records \n");
    for (int i = 0; i < 3; i++) {
    printf(" ID: %d \n Name: %s \n Salary: %.2f\n", emp[i].employeeID, emp[i].name, emp[i].salary);
    }
    return 0;
}