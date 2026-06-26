#include <stdio.h>
int main() {
    int ans, score = 0;
    printf("=== C Language Quiz ===\n\n");
    
    printf("Q1. Which function is used for output in C?\n");
    printf("1. cout  2. print  3. printf  4. display\n");
    printf("Answer: ");
    scanf("%d", &ans);
    if (ans == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Answer is 3 (printf)\n");
    }
    
    printf("\nQ2. What is the size of int in C?\n");
    printf("1. 1 byte  2. 2 bytes  3. 8 bytes  4. 4 bytes\n");
    printf("Answer: ");
    scanf("%d", &ans);
    if (ans == 4) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Answer is 4 (4 bytes)\n");
    }
    
    printf("\nQ3. Which symbol is used for single line comment?\n");
    printf("1. ##  2. //  3. **  4. %%\n");
    printf("Answer: ");
    scanf("%d", &ans);
    if (ans == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Answer is 2 (//)\n");
    }
    
    printf("\n=== Result ===\n");
    printf("Score: %d / 3\n", score);
    
    if (score == 3) {
        printf("Excellent!\n");
    } else if (score == 2) {
        printf("Good!\n");
    } else {
        printf("Keep practicing!\n");
    }
    
    return 0;
}