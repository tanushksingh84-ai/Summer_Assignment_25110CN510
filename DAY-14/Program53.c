#include <stdio.h>
int main()
{
    int a[50],i,n,key,flag=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        printf("Element found at position %d",i+1);
    else
        printf("Element not found");
    return 0;
}