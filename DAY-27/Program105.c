#include <stdio.h>
int main() {
    char name[50];
    int rollno, age;
    float marks;
    int choice;
    printf("=== Student Record Management System ===\n");
    printf("1. Add Student Record\n");
    printf("2. Display Student Record\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &rollno);
            printf("Enter Name: ");
            scanf("%s", name);
            printf("Enter Age: ");
            scanf("%d", &age);
            printf("Enter Marks: ");
            scanf("%f", &marks);
            printf("Record saved successfully!\n");
            
            printf("\n--- Student Record ---\n");
            printf("Roll No : %d\n", rollno);
            printf("Name    : %s\n", name);
            printf("Age     : %d\n", age);
            printf("Marks   : %.2f\n", marks);
            
            if (marks >= 90) {
                printf("Grade   : A\n");
            }
             else if (marks >= 75) {
                printf("Grade   : B\n");
            }
             else if (marks >= 60) {
                printf("Grade   : C\n");
            }
             else if (marks >= 40) {
                printf("Grade   : D\n");
            }
             else {
                printf("Grade   : F (Fail)\n");
            }
            break;
        case 2:
            printf("No records found. Please add first.\n");
            break;
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}