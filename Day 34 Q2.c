#include <stdio.h>

int main() {
    int array[100], size, position, i;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

  
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

 
    printf("Enter the position to delete (1 to %d): ", size);
    scanf("%d", &position);


    if(position < 1 || position > size) {
        printf("Invalid position!\n");
        return 1;
    }

    
    for(i = position - 1; i < size - 1; i++) {
        array[i] = array[i + 1];
    }

    size--;  

    
    printf("Array after deletion:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
