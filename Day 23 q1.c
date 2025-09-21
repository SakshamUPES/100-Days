#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;      
        denominator += 4;    
    }

    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
