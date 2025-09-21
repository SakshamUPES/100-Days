#include <stdio.h>

int main() {
    int a, b, i, hcf;

   
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Find the smaller number
    int min = (a < b) ? a : b;


    for (i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;  // Update HCF
        }
    }

    printf("HCF (GCD) of %d and %d is: %d\n", a, b, hcf);

    return 0;
}
