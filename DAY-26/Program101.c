#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;
    srand(time(0));
    secret = rand() % 100 + 1;   
    printf("=== Number Guessing Game ===\n");
    printf("Guess the number (1 to 100): ");
    scanf("%d", &guess);
    
    if (guess == secret) {
        printf("Correct! You guessed it!\n");
    } else if (guess < secret) {
        printf("Wrong! Correct number was %d. Too low!\n", secret);
    } else {
        printf("Wrong! Correct number was %d. Too high!\n", secret);
    }
    
    return 0;
}