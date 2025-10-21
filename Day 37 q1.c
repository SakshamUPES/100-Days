#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    printf("\nEnter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of each row
    for(int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for(int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    printf("\nSum of each row:\n");
    for(int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
