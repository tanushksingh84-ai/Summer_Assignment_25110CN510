#include <stdio.h>
int main()
{
    int i,j,k,n;
    char ch;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ch='A';
        for(k=1;k<=n-i;k++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("%c",ch++);
        ch-=2;
        for(j=1;j<i;j++)
        printf("%c",ch--);
        printf("\n");
    }
    return 0;
}