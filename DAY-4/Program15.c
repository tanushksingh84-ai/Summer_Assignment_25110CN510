#include <stdio.h>
int main()
{
    int n,temp,sum=0,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;   // store original number
    while(n>0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==temp)
        printf("%d is an Armstrong number",temp);
    else
        printf("%d is not an Armstrong number",temp);
    return 0;
}