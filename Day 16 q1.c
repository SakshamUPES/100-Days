#include <stdio.h>

int main() {
    int n, temp;
    unsigned long long binary = 0;
    int remainder, place = 1;

   
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    temp = n;

  
    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

  
    while (temp > 0) {
        remainder = temp % 2;
        binary = binary + remainder * place;
        temp = temp / 2;
        place = place * 10;
    }

   
    printf("Binary of %d is: %llu\n", n, binary);

    return 0;
}

