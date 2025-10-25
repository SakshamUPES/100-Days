#include <stdio.h>

int main() {
    int n, x, i, index = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;
        }
    }

    printf("%d\n", index);
    return 0;
}
