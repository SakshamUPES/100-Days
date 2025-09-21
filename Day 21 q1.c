#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digitsCount = 0, temp, swappedNum;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    lastDigit = temp % 10; // Last digit

    // Count digits and find first digit
    while (temp >= 10) {
        temp /= 10;
        digitsCount++;
    }
    firstDigit = temp;
    digitsCount++; // total digits

    // If number has only one digit, no swap needed
    if (digitsCount == 1) {
        printf("Number after swapping first and last digits: %d\n", num);
        return 0;
    }

    // Remove first digit from number
    temp = num % (int)pow(10, digitsCount - 1);

    // Remove last digit from temp
    temp = temp / 10;

    swappedNum = lastDigit * (int)pow(10, digitsCount - 1) + temp * 10 + firstDigit;

    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}
