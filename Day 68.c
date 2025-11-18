#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n (array should have n-1 elements): ");
    scanf("%d", &n);

    int arr[n - 1];
    printf("Enter %d elements (numbers between 0 to %d except one missing):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of first n natural numbers including 0
    int total_sum = n * (n + 1) / 2;

    // Calculate sum of entered elements
    int arr_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        arr_sum += arr[i];
    }

    // Missing number is difference between total_sum and arr_sum
    int missing = total_sum - arr_sum;

    printf("The missing number is: %d\n", missing);

    return 0;
}

