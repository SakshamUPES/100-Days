#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle special cases
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }


    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;  // Found a divisor
            break;
        }
    }

    // Output result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

