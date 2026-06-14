#include <stdio.h>
int main()
{
    int a[50],i,n,key,count=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to find frequency: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
        if(a[i]==key)
            count++;
    printf("Frequency is: %d",count);
    return 0;
}