#include <stdio.h>

int main() {
    int i, j, start;

    // Outer loop for rows
    for (i = 1; i <= 5; i++) {
        start = 6 - i;  // Calculate starting number for each row

        // Inner loop to print numbers from start up to 5
        for (j = start; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
