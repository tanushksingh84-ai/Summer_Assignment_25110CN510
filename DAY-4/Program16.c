#include <stdio.h>
int main()
{
    int a,b,i,n,sum,r;
    printf("Enter range: ");
    scanf("%d %d",&a,&b);
    // checking armstrong numbers in range
    printf("Armstrong numbers between %d and %d are: ",a,b);
    for(i=a;i<=b;i++){
        n=i;
        sum=0;
        while(n>0){
            r=n%10;
            sum=sum+r*r*r;
            n=n/10;
        }
        if(sum==i)
            printf("%d ",i);
    }
    return 0;
}