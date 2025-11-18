#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_so_far = arr[0];
    int max_ending_here = arr[0];

    for (int i = 1; i < n; i++) {
        // Extend the current subarray or start a new one at current element
        if (max_ending_here < 0) {
            max_ending_here = arr[i];
        } else {
            max_ending_here += arr[i];
        }

        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }
    }

    printf("Maximum sum of contiguous subarray is: %d\n", max_so_far);

    return 0;
}

