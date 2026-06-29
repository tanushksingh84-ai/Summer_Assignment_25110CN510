#include <stdio.h>
int main() {
    int arr[50], n, i, choice;
    int sum, large, small;
    float avg;
    
    printf("=== Menu Driven Array Operations ===\n");
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("\n1. Display Array\n");
    printf("2. Sum and Average\n");
    printf("3. Largest and Smallest\n");
    printf("4. Reverse Array\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Array: ");
            for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        case 2:
            sum = 0;
            for (i = 0; i < n; i++) {
                sum = sum + arr[i];
            }
            avg = (float)sum / n;
            printf("Sum     : %d\n", sum);
            printf("Average : %.2f\n", avg);
            break;
        case 3:
            large = arr[0];
            small = arr[0];
            for (i = 1; i < n; i++) {
                if (arr[i] > large) large = arr[i];
                if (arr[i] < small) small = arr[i];
            }
            printf("Largest  : %d\n", large);
            printf("Smallest : %d\n", small);
            break;
        case 4:
            printf("Reversed: ");
            for (i = n - 1; i >= 0; i--) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}