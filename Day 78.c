#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[256];
    FILE *fp;
    int ch;
    int vowels = 0, consonants = 0;

    printf("Enter the filename: ");
    if (fgets(filename, sizeof(filename), stdin) == NULL) {
        printf("Error reading filename.\n");
        return 1;
    }
    filename[strcspn(filename, "\n")] = 0;  // Remove newline

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file '%s'\n", filename);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {  // Check if alphabetic
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
        // Ignore digits and special characters
    }

    fclose(fp);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Total alphabetic characters: %d\n", vowels + consonants);
    return 0;
}

