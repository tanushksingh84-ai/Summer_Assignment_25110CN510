#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    int freq[256] = {0};
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    if(strlen(s1) != strlen(s2)) {
        printf("Not anagram");
        return 0;
    }

    for(int i=0; s1[i]!='\0'; i++) {
        freq[s1[i]]++;
        freq[s2[i]]--;
    }

    for(int i=0; i<256; i++) {
        if(freq[i] != 0) {
            printf("Not anagram");
            return 0;
        }
    }

    printf("Strings are anagram");
    return 0;
}