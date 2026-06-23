#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int freq[256] = {0};
    printf("Enter the string: ");
    gets(s);
    for(int i=0; s[i]!='\0'; i++)
        freq[s[i]]++;

    for(int i=0; s[i]!='\0'; i++) {
        if(freq[s[i]] == 1) {
            printf("First non-repeating character: %c", s[i]);
            return 0;
        }
    }
    printf("No non-repeating character found");
    return 0;
}