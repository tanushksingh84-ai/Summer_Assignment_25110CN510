#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int freq[256] = {0};
    printf("Enter the string: ");
    gets(s);
    for(int i=0; s[i]!='\0'; i++) {
        freq[s[i]]++;
        if(freq[s[i]] == 2) {
            printf("First repeating character: %c", s[i]);
            return 0;
        }
    }

    printf("No repeating character found");
    return 0;
}