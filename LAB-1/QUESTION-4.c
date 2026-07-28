#include <stdio.h>
struct Product {
    int productID;
    char productName[50];
    float price;
    int quantity;
};
int main() {
    struct Product p;
    float totalCost;
    printf("Enter Product ID: ");
    scanf("%d", &p.productID);
    printf("Enter Product Name: ");
    scanf(" %[^\n]s", p.productName);
    printf("Enter Price: ");
    scanf("%f", &p.price);
    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);
    totalCost = p.price * p.quantity;
    printf("\n Product Invoice \n");
    printf("ID: %d\n", p.productID);
    printf("Name: %s\n", p.productName);
    printf("Price: %.2f\n", p.price);
    printf("Quantity: %d\n", p.quantity);
    printf("Total Cost: %.2f\n", totalCost);
    return 0;
}