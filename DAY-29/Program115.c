#include <stdio.h>
int main() {
    char str[100];
    int choice, i, len, vowels, consonants;
    
    printf("=== Menu Driven String Operations ===\n");
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("\n1. Find Length\n");
    printf("2. Reverse String\n");
    printf("3. Count Vowels and Consonants\n");
    printf("4. Convert to Uppercase\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    // find length first (needed in multiple cases)
    len = 0;
    while (str[len] != '\0') {
        len++;
    }
    
    switch (choice) {
        case 1:
            printf("Length of string: %d\n", len);
            break;
        case 2:
            printf("Reversed: ");
            for (i = len - 1; i >= 0; i--) {
                printf("%c", str[i]);
            }
            printf("\n");
            break;
        case 3:
            vowels = 0;
            consonants = 0;
            for (i = 0; i < len; i++) {
                if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
                    str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
            printf("Vowels     : %d\n", vowels);
            printf("Consonants : %d\n", consonants);
            break;
        case 4:
            printf("Uppercase: ");
            for (i = 0; i < len; i++) {
                if (str[i] >= 'a' && str[i] <= 'z') {
                    printf("%c", str[i] - 32);
                } else {
                    printf("%c", str[i]);
                }
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