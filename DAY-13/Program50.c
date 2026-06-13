#include <stdio.h>
int main()
{
    int a[50],i,n,sum=0;
    float avg;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    avg=(float)sum/n;
    printf("Sum is: %d\n",sum);
    printf("Average is: %.2f",avg);
    return 0;
}