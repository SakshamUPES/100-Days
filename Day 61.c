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

    // Iterate over each subarray of size k
    for (int i = 0; i <= n - k; i++) {
        int found_negative = 0;
        // Check each element in the current window
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found_negative = 1;
                break; // Stop at the first negative integer found
            }
        }
        if (!found_negative) {
            printf("0 ");
        }
    }

    printf("\n");
    return 0;
}

