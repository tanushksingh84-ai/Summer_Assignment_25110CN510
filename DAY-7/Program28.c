#include <stdio.h>
int rev=0;
int reverse(int n)
{
    if(n==0)
        return rev;   // base condition
    rev=rev*10 + n%10;
    return reverse(n/10);   // recursive call
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Reversed number is: %d",reverse(n));
    return 0;
}