#include <stdio.h>
int sumDigits(int n)
{
    if(n==0)
        return 0;   // base condition
    return n%10 + sumDigits(n/10);   // recursive call
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits is: %d",sumDigits(n));
    return 0;
}