#include <stdio.h>
int main() {
    char names[5][50], dept[5][50];
    int empid[5], i, choice;
    float salary[5], basic, hra, net;
    
    printf("=== Mini Employee Management System ===\n");
    printf("1. Add Employees\n");
    printf("2. Display All Employees\n");
    printf("3. Generate Salary Slip\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter details of 5 employees:\n");
            for (i = 0; i < 5; i++) {
                printf("\nEmployee %d:\n", i + 1);
                printf("Emp ID     : "); scanf("%d", &empid[i]);
                printf("Name       : "); scanf("%s", names[i]);
                printf("Department : "); scanf("%s", dept[i]);
                printf("Salary     : "); scanf("%f", &salary[i]);
            }
            printf("\nAll employee records saved!\n");
            printf("\n--- Employee List ---\n");
            printf("%-5s %-15s %-12s %-10s\n", "ID", "Name", "Department", "Salary");
            printf("------------------------------------------\n");
            for (i = 0; i < 5; i++) {
                printf("%-5d %-15s %-12s Rs.%-10.2f\n", empid[i], names[i], dept[i], salary[i]);
            }
            break;
        case 2:
            printf("Add employees first using option 1.\n");
            break;
        case 3:
            printf("Enter basic salary: ");
            scanf("%f", &basic);
            hra = basic * 0.20;
            net = basic + hra;
            printf("\n--- Salary Slip ---\n");
            printf("Basic  : Rs. %.2f\n", basic);
            printf("HRA    : Rs. %.2f\n", hra);
            printf("Net    : Rs. %.2f\n", net);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}