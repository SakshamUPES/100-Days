#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], prev_greater[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Brute force nested loop to find previous greater element
    for (int i = 0; i < n; i++) {
        prev_greater[i] = -1; // Default if no greater found to the left
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev_greater[i] = arr[j];
                break;
            }
        }
    }

    // Print previous greater elements in comma separated fashion
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            printf("%d, ", prev_greater[i]);
        } else {
            printf("%d\n", prev_greater[i]);
        }
    }

    return 0;
}

