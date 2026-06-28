#include <stdio.h>
int main() {
    char name[50], from[50], to[50];
    int choice, seats, age;
    float price, total;
    
    printf("=== Ticket Booking System ===\n");
    printf("1. Book Ticket\n");
    printf("2. Cancel Ticket\n");
    printf("3. Check Fare\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter Name: ");
            scanf("%s", name);
            printf("Enter Age: ");
            scanf("%d", &age);
            printf("Enter From: ");
            scanf("%s", from);
            printf("Enter To: ");
            scanf("%s", to);
            printf("Enter Number of Seats: ");
            scanf("%d", &seats);
            
            price = 500;  // price per seat
            
            if (age >= 60) {
                price = price * 0.75;  // 25% discount for senior citizen
                printf("Senior citizen discount applied!\n");
            }
            
            total = price * seats;
            printf("\n--- Booking Confirmation ---\n");
            printf("Passenger  : %s\n", name);
            printf("From       : %s\n", from);
            printf("To         : %s\n", to);
            printf("Seats      : %d\n", seats);
            printf("Price/Seat : Rs. %.2f\n", price);
            printf("Total Fare : Rs. %.2f\n", total);
            printf("Booking Confirmed!\n");
            break;
        case 2:
            printf("Enter Name: ");
            scanf("%s", name);
            printf("Ticket of %s cancelled successfully!\n", name);
            printf("Refund will be processed in 3-5 days.\n");
            break;
        case 3:
            printf("Base Fare per seat : Rs. 500\n");
            printf("Senior Citizen     : 25%% discount\n");
            printf("Children below 5   : Free\n");
            break;
        case 4:
            printf("Thank you! Visit again.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}