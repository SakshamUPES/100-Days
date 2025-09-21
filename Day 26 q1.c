#include <stdio.h>

int main() {
    int i, j, start, n = 5;

    for (i = 1; i <= n; i++) {
        start = n + 1 - i; // starting number in each row

        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print numbers from start to 5
        for (j = start; j <= n; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
