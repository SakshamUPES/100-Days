#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    char filename[100];
    FILE *file;
    int characters = 0, words = 0, lines = 0;
    int ch;
    bool in_word = false;

    // Get filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read characters one by one
    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            if (in_word) {
                words++;
                in_word = false;
            }
        } else {
            in_word = true;
        }
    }

    // If file doesn't end with space, count last word
    if (in_word) {
        words++;
    }

    // If file is not empty but has no newline, count line
    if (characters > 0 && lines == 0) {
        lines = 1;
    }

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
