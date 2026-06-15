#include <stdio.h>
int main()
{
    int a[50],i,j=0,n,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    printf("Array after moving zeroes: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}