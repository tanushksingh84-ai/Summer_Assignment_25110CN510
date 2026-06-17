#include <stdio.h>
int main() {
    int n1, n2, i, j, k = 0, flag;
    printf("Enter number of elements of first array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements of first array:\n");
    for(i=0;i<n1;i++)
        scanf("%d", &a[i]);

    printf("Enter number of elements of second array: ");
    scanf("%d", &n2);
    int b[n2], c[n1+n2];
    printf("Enter elements of second array:\n");
    for(i =0;i<n2;i++)
        scanf("%d", &b[i]);

    for(i=0;i<n1;i++)
        c[k++] = a[i];

    for(i=0;i<n2;i++) {
        flag = 0;
        for(j = 0; j < n1; j++) {
            if(b[i] == a[j])
                flag = 1;
        }
        if(flag == 0)
            c[k++] = b[i];
    }

    printf("Union of arrays:\n");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}