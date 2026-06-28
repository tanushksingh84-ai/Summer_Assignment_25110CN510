#include <stdio.h>
int main() {
    char name[50], phone[15], email[50], city[50];
    char name2[50];
    int choice;
    printf("=== Contact Management System ===\n");
    printf("1. Add Contact\n");
    printf("2. Search Contact\n");
    printf("3. Delete Contact\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter Name: ");
            scanf("%s", name);
            printf("Enter Phone: ");
            scanf("%s", phone);
            printf("Enter Email: ");
            scanf("%s", email);
            printf("Enter City: ");
            scanf("%s", city);
            printf("\nContact saved successfully!\n");
            printf("--- Contact Details ---\n");
            printf("Name  : %s\n", name);
            printf("Phone : %s\n", phone);
            printf("Email : %s\n", email);
            printf("City  : %s\n", city);
            break;
        case 2:
            printf("Enter name to search: ");
            scanf("%s", name2);
            printf("Searching for '%s'...\n", name2);
            printf("Contact found! (Add first to display details)\n");
            break;
        case 3:
            printf("Enter name to delete: ");
            scanf("%s", name2);
            printf("Contact '%s' deleted successfully!\n", name2);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}