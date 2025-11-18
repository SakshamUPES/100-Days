#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], next_greater[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Brute force nested loop to find next greater element
    for (int i = 0; i < n; i++) {
        next_greater[i] = -1; // Default if no greater found
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next_greater[i] = arr[j];
                break;
            }
        }
    }

    // Print next greater elements in comma separated fashion
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            printf("%d, ", next_greater[i]);
        } else {
            printf("%d\n", next_greater[i]);
        }
    }

    return 0;
}

