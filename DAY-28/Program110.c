#include <stdio.h>
int main() {
    char name[50];
    int accno, choice;
    float balance, amount;
    printf("=== Bank Account System ===\n");
    printf("Enter Account Number: ");
    scanf("%d", &accno);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Initial Balance: ");
    scanf("%f", &balance);
    
    printf("\n1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Rs. %.2f deposited successfully!\n", amount);
            printf("New Balance: Rs. %.2f\n", balance);
            break;
        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > balance) {
                printf("Insufficient balance!\n");
            } else {
                balance = balance - amount;
                printf("Rs. %.2f withdrawn successfully!\n", amount);
                printf("Remaining Balance: Rs. %.2f\n", balance);
            }
            break;
        case 3:
            printf("Account No : %d\n", accno);
            printf("Name       : %s\n", name);
            printf("Balance    : Rs. %.2f\n", balance);
            break;
        case 4:
            printf("Thank you for banking with us!\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}