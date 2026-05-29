#include <stdio.h>

int main()
 {
    int num, temp, d, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num > 0) 
    {
        d = num % 10;
        reverse = reverse * 10+d;
        num = num / 10;
    }
    if (temp == reverse)
        printf("%d is a Palindrome number", temp);
    else
        printf("%d is not a Palindrome number", temp);

    return 0;
}