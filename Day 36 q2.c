#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j, sum = 0;


    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter number of columns: ");
    scanf("%d", &cols);


    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; 
        }
    }


    printf("\nSum of all elements in the matrix = %d\n", sum);

    return 0;
}
