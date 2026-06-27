#include <stdio.h>

int main() {
    char name[50];
    int empid, choice;
    float basic, hra, da, ta, gross, tax, net;
    printf("=== Salary Management System ===\n");
    printf("1. Calculate Salary\n");
    printf("2. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
// hra = house rent allowance, DA=dearness allowance ,TA=Travel alowance
    
switch (choice) {
        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &empid);
            printf("Enter Name: ");
            scanf("%s", name);
            printf("Enter Basic Salary: ");
            scanf("%f", &basic);
            // standard calculations
            hra = basic * 0.20;   // 20% of basic
            da  = basic * 0.50;   // 50% of basic
            ta  = basic * 0.10;   // 10% of basic
            gross = basic + hra + da + ta;
            
            if (gross > 50000) {
                tax = gross * 0.10;  // 10% tax
            } else {
                tax = 0;
            }
            net = gross - tax;
            
            printf("\n--- Salary Slip ---\n");
            printf("Employee ID  : %d\n", empid);
            printf("Name         : %s\n", name);
            printf("Basic Salary : Rs. %.2f\n", basic);
            printf("HRA (20%%)    : Rs. %.2f\n", hra);
            printf("DA  (50%%)    : Rs. %.2f\n", da);
            printf("TA  (10%%)    : Rs. %.2f\n", ta);
            printf("Gross Salary : Rs. %.2f\n", gross);
            printf("Tax          : Rs. %.2f\n", tax);
            printf("Net Salary   : Rs. %.2f\n", net);
            break;
        case 2:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}