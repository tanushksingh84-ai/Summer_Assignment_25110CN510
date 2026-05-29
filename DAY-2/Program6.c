#include<stdio.h>
int main()
{
    int temp,num,d,reverse=0;
    printf("Enter The number you want to reverse=");
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {
        d=num%10;
        reverse=reverse*10+d;
        num=num/10;
    }
    printf("The reverse of the number %d is %d",temp,reverse);
    return 0;
    }