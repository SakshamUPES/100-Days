#include <stdio.h>
#include <limits.h>  // for INT_MIN

int main() {
    int array[100], size, i;
    int largest, second_largest;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("At least two elements are required.\n");
        return 1;
    }

    // Input the elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Initialize largest and second largest
    largest = second_largest = INT_MIN;

    // Find largest and second largest
    for (i = 0; i < size; i++) {
        if (array[i] > largest) {
            second_largest = largest;
            largest = array[i];
        } else if (array[i] > second_largest && array[i] != largest) {
            second_largest = array[i];
        }
    }

    if (second_largest == INT_MIN) {
        printf("There is no distinct second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}
