#include <stdio.h>
int main() {
    char bnames[5][50], author[5][50];
    int bid[5], qty[5], i, choice;
    float price[5];
    char search[50];
    
    printf("=== Mini Library System ===\n");
    printf("1. Add Books\n");
    printf("2. Display All Books\n");
    printf("3. Issue Book\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter details of 5 books:\n");
            for (i = 0; i < 5; i++) {
                printf("\nBook %d:\n", i + 1);
                printf("Book ID   : "); scanf("%d", &bid[i]);
                printf("Book Name : "); scanf("%s", bnames[i]);
                printf("Author    : "); scanf("%s", author[i]);
                printf("Price     : "); scanf("%f", &price[i]);
                printf("Quantity  : "); scanf("%d", &qty[i]);
            }
            printf("\nAll books added!\n");
            printf("\n--- Book List ---\n");
            printf("%-5s %-20s %-15s %-8s %-5s\n", "ID", "Book Name", "Author", "Price", "Qty");
            printf("-------------------------------------------------------\n");
            for (i = 0; i < 5; i++) {
                printf("%-5d %-20s %-15s %-8.2f %-5d\n", bid[i], bnames[i], author[i], price[i], qty[i]);
            }
            break;
        case 2:
            printf("Add books first using option 1.\n");
            break;
        case 3:
            printf("Enter Book Name to issue: ");
            scanf("%s", search);
            printf("Book '%s' issued for 15 days.\n", search);
            printf("Please return on time to avoid fine.\n");
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}