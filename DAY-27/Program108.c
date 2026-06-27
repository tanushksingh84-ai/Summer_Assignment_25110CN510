#include <stdio.h>
int main() {
    char name[50];
    int rollno, choice;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    printf("=== Marksheet Generation System ===\n");
    printf("1. Generate Marksheet\n");
    printf("2. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &rollno);
            printf("Enter Name: ");
            scanf("%s", name);
            printf("Enter marks of 5 subjects (out of 100):\n");
            printf("Maths: "); scanf("%f", &m1);
            printf("English: "); scanf("%f", &m2);
            printf("CS: "); scanf("%f", &m3);
            printf("Hindi "); scanf("%f", &m4);
            printf("Science: "); scanf("%f", &m5);
            
            total = m1 + m2 + m3 + m4 + m5;
            percentage = total / 5;
            
            printf("\n========== MARKSHEET ==========\n");
            printf("Roll No    : %d\n", rollno);
            printf("Name       : %s\n", name);
            printf("--------------------------------\n");
            printf("Maths : %.2f\n", m1);
            printf("English  : %.2f\n", m2);
            printf("CS  : %.2f\n", m3);
            printf("Hindi  : %.2f\n", m4);
            printf("Science : %.2f\n", m5);
            printf("--------------------------------\n");
            printf("Total      : %.2f / 500\n", total);
            printf("Percentage : %.2f%%\n", percentage);
            
            if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40) {
                printf("Result     : FAIL\n");
                printf("Grade      : F\n");
            } else if (percentage >= 90) {
                printf("Result     : PASS\n");
                printf("Grade      : A+\n");
            } else if (percentage >= 75) {
                printf("Result     : PASS\n");
                printf("Grade      : A\n");
            } else if (percentage >= 60) {
                printf("Result     : PASS\n");
                printf("Grade      : B\n");
            } else if (percentage >= 45) {
                printf("Result     : PASS\n");
                printf("Grade      : C\n");
            } else {
                printf("Result     : FAIL\n");
                printf("Grade      : F\n");
            }
            printf("================================\n");
            break;
        case 2:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}