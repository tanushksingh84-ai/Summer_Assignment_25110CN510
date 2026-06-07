#include <stdio.h>
int maximum(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int a,b,m;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    m=maximum(a,b);
    printf("Maximum is: %d",m);
    return 0;
}