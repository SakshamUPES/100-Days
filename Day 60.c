#include <stdio.h>

int main() {
    int n, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the subarray size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size k\n");
        return 1;
    }

    // For each subarray of size k, find the maximum element
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }
    printf("\n");

    return 0;
}

