#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, end;
    char temp;

    printf("Enter a string: ");
    gets(str); 
    start = 0;
    end = strlen(str) - 1;

    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move indices
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
