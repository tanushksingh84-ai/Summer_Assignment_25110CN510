#include <stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,s;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    printf("Sum is: %d",s);
    return 0;
}