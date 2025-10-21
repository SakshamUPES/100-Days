#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool distinct = true;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = false;
                break;
            }
        }
        if (!distinct) {
            break;
        }
    }

    if (distinct) {
        printf("\nDiagonal elements are distinct.\n");
    } else {
        printf("\nDiagonal elements are not distinct.\n");
    }

    return 0;
}
