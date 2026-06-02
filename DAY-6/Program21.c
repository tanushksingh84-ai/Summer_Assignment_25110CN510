#include <stdio.h>
int main()
{
    int n,binary=0,place=1,r;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    // converting decimal to binary
        while(n>0){
        r=n%2;
        binary=binary+r*place;
        place=place*10;
        n=n/2;
    }
    printf("Binary equivalent is: %d",binary);
    return 0;
}