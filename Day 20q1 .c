#include <stdio.h>

int main() {
    int num, digit;
    unsigned long long product = 1;
    int oddFound = 0; 

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers by taking absolute value
    if (num < 0) {
        num = -num;
    }

    // Loop to extract digits and multiply odd ones
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {  // Check if odd digit
            product *= digit;
            oddFound = 1;
        }
        num = num / 10;
    }

   
    if (oddFound) {
        printf("Product of odd digits = %llu\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}

