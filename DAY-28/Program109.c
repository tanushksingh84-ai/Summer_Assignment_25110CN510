#include <stdio.h>
int main() {
    char bname[50], author[50], bname2[50];
    int bid, choice, qty;
    float price;

    printf("=== Library Management System ===\n");
    printf("1. Add Book\n");
    printf("2. Issue Book\n");
    printf("3. Return Book\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &bid);
            printf("Enter Book Name: ");
            scanf("%s", bname);
            printf("Enter Author: ");
            scanf("%s", author);
            printf("Enter Price: ");
            scanf("%f", &price);
            printf("Enter Quantity: ");
            scanf("%d", &qty);
            printf("\nBook added successfully!\n");
            printf("--- Book Details ---\n");
            printf("Book ID   : %d\n", bid);
            printf("Book Name : %s\n", bname);
            printf("Author    : %s\n", author);
            printf("Price     : Rs. %.2f\n", price);
            printf("Quantity  : %d\n", qty);
            break;
        case 2:
            printf("Enter Book Name to Issue: ");
            scanf("%s", bname2);
            printf("Book '%s' issued successfully!\n", bname2);
            printf("Please return within 15 days.\n");
            break;
        case 3:
            printf("Enter Book Name to Return: ");
            scanf("%s", bname2);
            printf("Book '%s' returned successfully!\n", bname2);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}