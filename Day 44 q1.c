#include <stdio.h>

int main() {
    char str[200];
    int i, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // Check every character of the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (str[i] == ' ')
            spaces++;
        else if ((str[i] >= 'A' && str[i] <= 'Z') ||
                 (str[i] >= 'a' && str[i] <= 'z'))
            continue; // skip alphabets
        else if (str[i] != '\n')
            special++;
    }

    printf("Total spaces: %d\n", spaces);
    printf("Total digits: %d\n", digits);
    printf("Total special characters: %d\n", special);

    return 0;
}
