#include <stdio.h>

int main() {
    int n, i, total = 0, left = 0, index = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

   
    for (i = 0; i < n; i++)
        total += arr[i];

    for (i = 0; i < n; i++) {
        total -= arr[i]; 
        if (left == total) {
            index = i;
            break;
        }
        left += arr[i];
    }

    printf("%d\n", index);
    return 0;
}
