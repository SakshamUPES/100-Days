#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 1;
    int denominator = 1;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            // First term is 1 (integer)
            sum += 1;
            numerator = 3;     
            denominator = 4;    
        } else {
            sum += (double)numerator / denominator;
            numerator += 2;     
            denominator += 2;    
        }
    }

    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
