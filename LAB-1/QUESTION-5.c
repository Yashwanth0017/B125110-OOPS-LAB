#include <stdio.h>
struct Rectangle {
    float length;
    float breadth;
};
int main() {
    struct Rectangle r;
    float area, perimeter;
    printf("Enter Length of Rectangle: ");
    scanf("%f", &r.length);
    printf("Enter Breadth of Rectangle: ");
    scanf("%f", &r.breadth);
    area = r.length * r.breadth;
    perimeter = 2 * (r.length + r.breadth);
    printf("\n Results \n");
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    return 0;
}