#include <stdio.h>
int main() {
    float a, b, result;
    int choice;
    printf("=== Menu Driven Calculator ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice != 5) {
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
    }
    
    switch (choice) {
        case 1:
            result = a + b;
            printf("%.2f + %.2f = %.2f\n", a, b, result);
            break;
        case 2:
            result = a - b;
            printf("%.2f - %.2f = %.2f\n", a, b, result);
            break;
        case 3:
            result = a * b;
            printf("%.2f * %.2f = %.2f\n", a, b, result);
            break;
        case 4:
            if (b == 0) {
                printf("Error! Division by zero.\n");
            } else {
                result = a / b;
                printf("%.2f / %.2f = %.2f\n", a, b, result);
            }
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}