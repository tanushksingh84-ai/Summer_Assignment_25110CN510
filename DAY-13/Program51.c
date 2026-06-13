#include <stdio.h>
int main()
{
    int a[50],i,n,max,min;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("Largest element is: %d\n",max);
    printf("Smallest element is: %d",min);
    return 0;
}