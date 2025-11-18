#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int repeated = 0;
    
    // XOR all elements. Since only one element repeats, XOR will give that repeated element
    for (int i = 0; i < n; i++) {
        repeated ^= arr[i];
    }
    
    printf("The repeated element is: %d\n", repeated);
    
    return 0;
}

