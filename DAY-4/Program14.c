#include <stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("Enter term position: ");
    scanf("%d",&n);
    // calculating nth fibonacci term
    if(n==1){
        printf("Fibonacci term at position %d is: %d",n,a);
        return 0;
    }

    for(i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("Fibonacci term at position %d is: %d",n,a);
    return 0;
}