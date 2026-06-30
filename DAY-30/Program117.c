#include <stdio.h>
int main() {
    char names[5][50];
    int rollno[5], i, choice;
    float marks[5], total, avg, large;
    
    printf("=== Student Record System ===\n");
    printf("1. Enter Records\n");
    printf("2. Display All Records\n");
    printf("3. Find Topper\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter details of 5 students:\n");
            for (i = 0; i < 5; i++) {
                printf("\nStudent %d:\n", i + 1);
                printf("Roll No : "); scanf("%d", &rollno[i]);
                printf("Name    : "); scanf("%s", names[i]);
                printf("Marks   : "); scanf("%f", &marks[i]);
            }
            printf("\nAll records saved!\n");
            printf("\n--- All Student Records ---\n");
            printf("%-5s %-15s %-10s %-5s\n", "Roll", "Name", "Marks", "Grade");
            printf("------------------------------------\n");
            for (i = 0; i < 5; i++) {
                printf("%-5d %-15s %-10.2f", rollno[i], names[i], marks[i]);
                if (marks[i] >= 90) printf("A+\n");
                else if (marks[i] >= 75) printf("A\n");
                else if (marks[i] >= 60) printf("B\n");
                else if (marks[i] >= 40) printf("C\n");
                else printf("F\n");
            }
            break;
        case 2:
            printf("Please add records first using option 1.\n");
            break;
        case 3:
            printf("Please add records first using option 1.\n");
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}