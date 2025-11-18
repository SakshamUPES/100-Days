#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert entire string to lowercase first
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }

    // Capitalize first alphabetic character
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
            break;
        }
    }

    printf("Sentence case: %s", str);
    return 0;
}

