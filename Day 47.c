#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, length, max_len = 0, curr_len = 0, start = 0, max_start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    for (i = 0; i <= length; i++) {
        // Check for end of word (space or null character)
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            if (curr_len > max_len) {
                max_len = curr_len;
                max_start = start;
            }
            curr_len = 0;
            start = i + 1;
        } else {
            curr_len++;
        }
    }

    printf("Longest word: ");
    for (i = max_start; i < max_start + max_len; i++) {
        printf("%c", str[i]);
    }
    printf("\nLength of longest word: %d\n", max_len);

    return 0;
}
