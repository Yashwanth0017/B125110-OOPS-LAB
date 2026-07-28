#include <stdio.h>
struct Distance {
    int feet;
    int inches;
};
int main() {
    struct Distance d1, d2, total;
    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);
    printf("\nEnter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);
     total.feet = d1.feet + d2.feet;
     total.inches = d1.inches + d2.inches;
    printf("\nTotal Distance:\n");
    printf("Feet: %d, Inches: %d\n", total.feet, total.inches);
    return 0;
}
