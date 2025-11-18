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

    // Calculate sum of first window of size k
    int window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    int max_sum = window_sum;

    // Slide the window and update sums
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];  // Add next element and remove first element of previous window
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("Maximum sum of subarrays of size %d is: %d\n", k, max_sum);

    return 0;
}

