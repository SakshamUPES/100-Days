#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal Traversal of the matrix:\n");

    // Traverse matrix in diagonal order
    for (int line = 1; line <= (rows + cols - 1); line++) {
        int start_col = (line <= rows) ? 1 : (line - rows + 1);
        int count = (line <= cols) ? line : (cols - start_col + 1);

        for (int j = 0; j < count; j++) {
            int row = (line <= rows) ? (line - j - 1) : (rows - j - 1);
            int col = start_col + j - 1;
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
