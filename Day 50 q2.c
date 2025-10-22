#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character from fgets
    str[strcspn(str, "\n")] = 0;

    len = strlen(str);

    printf("All substrings of the string:\n");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            // Print substring from i to j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
