#include <stdio.h>
int main() {
    int n, i, j, sum;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the required sum: ");
    scanf("%d", &sum);
    printf("Pairs with given sum are:\n");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] + a[j] == sum)
                printf("%d %d\n", a[i], a[j]);
        }
    }
    return 0;
}