
#include <stdio.h>

int main() {
    int binary, temp, digit;
    int onesComplement = 0;
    int place = 1;

    // Input binary number (as an integer)
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    temp = binary;

    // Process each digit to find 1's complement
    while (temp > 0) {
        digit = temp % 10;

        // Check if digit is valid (0 or 1)
        if (digit != 0 && digit != 1) {
            printf("Invalid binary number.\n");
            return 1;
        }

        // Flip the bit (1's complement)
        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        // Build the 1's complement number
        onesComplement = onesComplement + digit * place;
        place = place * 10;

        temp = temp / 10;
    }

    printf("1's complement: %d\n", onesComplement);

    return 0;
}
