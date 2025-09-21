#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;  // Save the original number

    // Reverse the number
    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    // Check for palindrome
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}

