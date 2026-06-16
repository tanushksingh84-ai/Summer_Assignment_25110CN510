#include <stdio.h>
int main() {
    int n, i, j, count, max = 0, element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(a[i] == a[j])
                count++;
        }
        if(count > max) {
            max = count;
            element = a[i];
        }
    }
    printf("Maximum frequency element is: %d", element);
    return 0;
}