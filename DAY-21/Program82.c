#include <stdio.h>
int main() {
    char str[100], rev[100];
    int i = 0, j = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[i] != '\0')
        i++;

    i--;
    while(i >= 0) {
        rev[j] = str[i];
        j++;
        i--;
    }
    rev[j] = '\0';
    printf("Reversed string: %s", rev);
    return 0;
}