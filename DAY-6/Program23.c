#include <stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    // counting set bits
    while(n>0)
    {
        if(n%2==1)
            count++;
        n=n/2;
    }
    printf("Total set bits are: %d",count);
    return 0;
}