#include <stdio.h>
#include <string.h>

// Function to reverse a portion of the string from start to end indices
void reverseWord(char *str, int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i, start = 0, length;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    length = strlen(str);

    for (i = 0; i <= length; i++) {
        // Check for space, newline or end of string
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Sentence with each word reversed: %s", str);
    return 0;
}
