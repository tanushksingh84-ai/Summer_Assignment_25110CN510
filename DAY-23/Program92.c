#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int freq[256] = {0}, max = 0;
    char ch;
    printf("Enter the string: ");
    gets(s);
    for(int i=0; s[i]!='\0'; i++)
        freq[s[i]]++;

    for(int i=0; i<256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            ch = i;
        }
    }
    printf("Maximum occurring character: %c", ch);
    return 0;
}