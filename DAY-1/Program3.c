#include<stdio.h>

int main()
{
    long long int n, i, factorial = 1;

    printf("Enter the number to find factorial: ");
    scanf("%lld", &n);

    for(i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of given number is: %lld", factorial);

    return 0;
}