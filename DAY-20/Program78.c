#include <stdio.h>
int main() {
    int n, i, j, flag = 1;
    printf("Enter order of matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i])
                flag = 0;
        }
    }
    if(flag == 1)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");

    return 0;
}