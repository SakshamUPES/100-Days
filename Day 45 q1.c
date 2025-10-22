#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char ch;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    printf("Enter the character to find frequency: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("The frequency of '%c' is: %d\n", ch, count);
    return 0;

