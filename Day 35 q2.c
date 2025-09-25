#include <stdio.h>

int main() {
    int array[100], size, k, i, j, temp;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);


    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

  
    printf("Enter number of positions to rotate right (k): ");
    scanf("%d", &k);

   
    k = k % size;

 
    for(i = 0; i < k; i++) {
       
        temp = array[size - 1];

        for(j = size - 1; j > 0; j--) {
            array[j] = array[j - 1];
        }

        array[0] = temp;
    }


    printf("Array after rotating right by %d positions:\n", k);
    for(i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

