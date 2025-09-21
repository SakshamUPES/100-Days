#include <stdio.h>

int main() {
    int i, j;
    int n = 5;  

    // Upper half of diamond
    for (i = 1; i <= n; i++) {
        // Print stars: 2*i - 1 stars
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of diamond
    for (i = n - 1; i >= 1; i--) {
        // Print stars: 2*i - 1 stars
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
