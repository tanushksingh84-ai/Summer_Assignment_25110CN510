#include <stdio.h>
int main() {
    char iname[50];
    int iid, qty, choice;
    float price, total;
    
    printf("=== Inventory Management System ===\n");
    printf("1. Add Item\n");
    printf("2. Check Stock\n");
    printf("3. Calculate Total Value\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter Item ID: ");
            scanf("%d", &iid);
            printf("Enter Item Name: ");
            scanf("%s", iname);
            printf("Enter Quantity: ");
            scanf("%d", &qty);
            printf("Enter Price per unit: ");
            scanf("%f", &price);
            printf("\nItem added successfully!\n");
            printf("--- Item Details ---\n");
            printf("Item ID   : %d\n", iid);
            printf("Item Name : %s\n", iname);
            printf("Quantity  : %d\n", qty);
            printf("Price     : Rs. %.2f\n", price);
            
            if (qty < 10) {
                printf("Warning   : Low stock!\n");
            } else {
                printf("Status    : Stock OK\n");
            }
            break;
        case 2:
            printf("Enter Item Name: ");
            scanf("%s", iname);
            printf("Enter Quantity: ");
            scanf("%d", &qty);
            if (qty == 0) {
                printf("Item '%s' is OUT OF STOCK!\n", iname);
            } else if (qty < 10) {
                printf("Item '%s' has LOW STOCK: %d left\n", iname, qty);
            } else {
                printf("Item '%s' is IN STOCK: %d available\n", iname, qty);
            }
            break;
        case 3:
            printf("Enter Quantity: ");
            scanf("%d", &qty);
            printf("Enter Price per unit: ");
            scanf("%f", &price);
            total = qty * price;
            printf("Total Inventory Value: Rs. %.2f\n", total);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }  
    return 0;
}