#include <stdio.h>
int main() {
    int balance = 10000;
    int choice, amount;  
    printf("=== ATM Machine ===\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw\n");
    printf("3. Deposit\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Current Balance: Rs. %d\n", balance);
            break;
        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            if (amount > balance) {
                printf("Insufficient balance!\n");
            } else {
                balance = balance - amount;
                printf("Rs. %d withdrawn. Remaining: Rs. %d\n", amount, balance);
            }
            break;
        case 3:
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);
            balance = balance + amount;
            printf("Rs. %d deposited. New Balance: Rs. %d\n", amount, balance);
            break;
        case 4:
            printf("Thank you! Goodbye.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}