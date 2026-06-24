#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int count;
    printf("Enter the string: ");
    gets(s);

    for(int i=0; s[i]!='\0'; i++) {
        count = 1;
        while(s[i] == s[i+1]) {
            count++;
            i++;
        }
        printf("%c%d", s[i], count);
    }
    return 0;
}