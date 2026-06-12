#include <stdio.h>
int armstrong(int n)
{
    int r,sum=0,temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==temp)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(armstrong(n))
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");
    return 0;
}