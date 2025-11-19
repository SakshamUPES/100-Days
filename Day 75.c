#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char text[256];

    // Prompt user for filename
    printf("Enter filename to open in append mode: ");
    fgets(filename, sizeof(filename), stdin);
    // Remove trailing newline character from fgets
    filename[strcspn(filename, "\n")] = 0;

    // Open file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Prompt user for the text to append
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, file);

    // Close the file
    fclose(file);

    printf("Text appended successfully.\n");

    return 0;
}
