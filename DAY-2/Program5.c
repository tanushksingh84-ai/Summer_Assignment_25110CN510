#include<stdio.h>
int main()
{
   int num,sum=0;
   printf("Enter a Number =");
   scanf("%d",&num);
   while(num!=0)
   {
    int d = num%10;
    sum = sum + d;
    num = num/10;
   }
   printf("The sum of Digits of the given number is= %d",sum);
   return 0;
       
}
