#include <stdio.h>
int main() 
{
    int n, i, sum = 0, total;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n-1];
    printf("Enter the array elements:\n");
    for(i = 0; i < n-1; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    total = n * (n + 1) / 2;
    printf("Missing number is: %d", total - sum);
    return 0;
}