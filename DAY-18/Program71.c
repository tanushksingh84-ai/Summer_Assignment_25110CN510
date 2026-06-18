#include <stdio.h>

int main() {
    int n, i, key, low = 0, high, mid;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == key) {
            printf("Element found");
            return 0;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("Element not found");
    return 0;
}