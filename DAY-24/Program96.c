#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int freq[256] = {0};

    printf("Enter the string: ");
    gets(s);

    for(int i=0; s[i]!='\0'; i++) {
        if(freq[s[i]] == 0) {
            printf("%c", s[i]);
            freq[s[i]] = 1;
        }
    }

    return 0;
}