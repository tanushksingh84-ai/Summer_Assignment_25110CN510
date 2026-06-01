#include <stdio.h>
int main()
{
    int n,temp,r,sum=0,i,fact;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;   // store original number
    while(n>0)
    {
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++)
            fact=fact*i;
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp)
        printf("%d is a strong number",temp);
    else
        printf("%d is not a strong number",temp);
    return 0;
}