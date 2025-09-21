#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to extract and add digits
    while (num > 0) {
        digit = num % 10;     
        sum += digit;         
        num = num / 10;       
    }

  
    printf("Sum of digits = %d\n", sum);

    return 0;
}
