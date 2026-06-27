#include <stdio.h>
int main() {
    char name[50], dept[50];
    int empid, age, choice;
    float salary;
    printf("=== Employee Management System ===\n");
    printf("1. Add Employee\n");
    printf("2. Display Employee\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &empid);
            printf("Enter Name: ");
            scanf("%s", name);
            printf("Enter Age: ");
            scanf("%d", &age);
            printf("Enter Department: ");
            scanf("%s", dept);
            printf("Enter Salary: ");
            scanf("%f", &salary);
            printf("Employee record saved!\n");
            
            printf("\n--- Employee Details ---\n");
            printf("Employee ID  : %d\n", empid);
            printf("Name         : %s\n", name);
            printf("Age          : %d\n", age);
            printf("Department   : %s\n", dept);
            printf("Salary       : Rs. %.2f\n", salary);
            
            if (salary >= 50000) {
                printf("Category     : Senior Employee\n");
            } else if (salary >= 30000) {
                printf("Category     : Mid Level Employee\n");
            } else {
                printf("Category     : Junior Employee\n");
            }
            break;
        case 2:
            printf("No records found. Please add first.\n");
            break;
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}