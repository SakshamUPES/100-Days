#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Initialize answer array as 1 for multiplication identity
    for (int i = 0; i < n; i++) {
        answer[i] = 1;
    }

    // Calculate prefix products for each element
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    // Calculate suffix products and multiply with the prefix products stored in answer
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    // Print the answer array in comma-separated format
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            printf("%d, ", answer[i]);
        } else {
            printf("%d\n", answer[i]);
        }
    }

    return 0;
}

