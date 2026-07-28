#include <stdio.h>
struct Book {
    int bookID;
    char title[100];
    char authorName[50];
    float price;
};
int main() {
    struct Book b;
    printf("Enter Book ID: ");
    scanf("%d", &b.bookID);
    printf("Enter Title: ");
    scanf(" %[^\n]s", b.title);
    printf("Enter Author Name: ");
    scanf(" %[^\n]s", b.authorName);
    printf("Enter Price: ");
    scanf("%f", &b.price);
    printf("BOOK DETAILS\n");
    printf(" Book ID  : %d\n", b.bookID);
    printf(" Title    : %s\n", b.title);
    printf(" Author   : %s\n", b.authorName);
    printf(" Price    : $%.2f\n", b.price);
    return 0;
}