#include <stdio.h>
int main()
{
    int a[50],i,j,n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Duplicate elements are: ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
    return 0;
}