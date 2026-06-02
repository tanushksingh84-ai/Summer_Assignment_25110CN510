#include <stdio.h>
int main()
{
    int x,n,i,result=1;
    printf("Enter base and power: ");
    scanf("%d %d",&x,&n);
    // calculating power without pow()
    for(i=1;i<=n;i++)
        result=result*x;
    printf("Result of %d raised to %d is: %d",x,n,result);
    return 0;
}