#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate sum of proper divisors (excluding the number itself)
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if number is perfect
    if (sum == num && num != 0) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
