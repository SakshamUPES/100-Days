#include <stdio.h>

int main() {
    int a, b, max, lcm;

    // Input two positive integers
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Start checking from the maximum of the two numbers
    max = (a > b) ? a : b;

    // Loop until we find the LCM
    while (1) {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break; // Found the LCM
        }
        max++; // Try next number
    }

    // Output the result
    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}

