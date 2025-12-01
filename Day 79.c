
#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    long long sum = 0;  // Use long long for large sums
    int count = 0;
    
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open numbers.txt\n");
        return 1;
    }

    // Read all integers from file
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    
    fclose(fp);
    
    if (count == 0) {
        printf("No numbers found in file.\n");
        return 1;
    }
    
    printf("Sum: %lld\n", sum);
    printf("Average: %.2f\n", (double)sum / count);
    printf("Count of numbers: %d\n", count);
    return 0;
}
