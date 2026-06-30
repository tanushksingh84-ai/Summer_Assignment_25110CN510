#include <stdio.h>
int main() {
    // Student Management Mini Project
    char names[3][50];
    int rollno[3], i, choice;
    float marks[3][3], total[3], percentage[3];
    
    printf("========================================\n");
    printf("   STUDENT MANAGEMENT MINI PROJECT\n");
    printf("========================================\n");
    printf("1. Enter Student Data\n");
    printf("2. Display Report Card\n");
    printf("3. Show Topper\n");
    printf("4. Show Class Average\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter data for 3 students (3 subjects each):\n");
            for (i = 0; i < 3; i++) {
                printf("\nStudent %d:\n", i + 1);
                printf("Roll No : "); scanf("%d", &rollno[i]);
                printf("Name    : "); scanf("%s", names[i]);
                printf("Marks in 3 subjects: ");
                scanf("%f %f %f", &marks[i][0], &marks[i][1], &marks[i][2]);
                total[i] = marks[i][0] + marks[i][1] + marks[i][2];
                percentage[i] = total[i] / 3;
            }
            printf("\nData saved successfully!\n");
            
            printf("\n--- Report Cards ---\n");
            for (i = 0; i < 3; i++) {
                printf("\nRoll No    : %d\n", rollno[i]);
                printf("Name       : %s\n", names[i]);
                printf("Subject 1  : %.2f\n", marks[i][0]);
                printf("Subject 2  : %.2f\n", marks[i][1]);
                printf("Subject 3  : %.2f\n", marks[i][2]);
                printf("Total      : %.2f / 300\n", total[i]);
                printf("Percentage : %.2f%%\n", percentage[i]);
                if (percentage[i] >= 75) printf("Result     : PASS (First Division)\n");
                else if (percentage[i] >= 60) printf("Result     : PASS (Second Division)\n");
                else if (percentage[i] >= 40) printf("Result     : PASS (Third Division)\n");
                else printf("Result     : FAIL\n");
            }
            break;
        case 2:
            printf("Enter data first using option 1.\n");
            break;
        case 3:
            printf("Enter data first using option 1.\n");
            break;
        case 4:
            printf("Enter data first using option 1.\n");
            break;
        case 5:
            printf("Thank you! Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}