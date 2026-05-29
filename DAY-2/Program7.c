#include<stdio.h>
int main()
{
    int num,temp,d,product=1;
    printf("Enter A number=");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        d=num%10;
        product=product*d;
        num=num/10;
    }
    printf("The product of digits of numer %d is %d",temp,product);
    return 0;
}