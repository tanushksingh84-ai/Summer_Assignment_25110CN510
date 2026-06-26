#include <stdio.h>
int main() {
    int age;
    char name[50];
    printf("=== Voting Eligibility System ===\n");
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Hello %s! You are eligible to vote.\n", name);
    } else {
        printf("Sorry %s! You are not eligible.\n", name);
        printf("Come back after %d year(s).\n", 18 - age);
    }
    
    return 0;
}