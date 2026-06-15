#include <stdio.h>
int main()
{
    int a[50],i,n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Reversed array is: ");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}