#include <stdio.h>

int main() {
    int num, original, remainder, result = 0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Calculate sum of cubes of digits
    while (num > 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;  // Cube of digit
        num = num / 10;
    }

    // Check if Armstrong
    if (original == result) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}

