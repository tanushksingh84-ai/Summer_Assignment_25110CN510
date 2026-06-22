#include <stdio.h>
int main() {
    char str[200];
    int i = 0, count = 1;
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);
    while(str[i] != '\0') {
        if(str[i] == ' ')
            count++;
        i++;
    }
    printf("Number of words = %d", count);
    return 0;
}