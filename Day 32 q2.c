#include <stdio.h>

int main() {
    long long num;
    int digit, count, maxCount = 0, maxDigit = 0;
    
    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0) num = -num;  // Handle negative numbers

    // Since we can't use arrays, we'll check each digit 0-9 separately
    for (int d = 0; d <= 9; d++) {
        count = 0;
        long long temp = num;

        // Count occurrences of digit d in num
        while (temp > 0) {
            digit = temp % 10;
            if (digit == d)
                count++;
            temp /= 10;
        }

        // Update max if current digit count is higher
        if (count > maxCount) {
            maxCount = count;
            maxDigit = d;
        }
    }

    printf("Digit %d occurs the most, %d times.\n", maxDigit, maxCount);

    return 0;
}
