#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Print first character if it's a letter
    if (isalpha(name[0])) {
        printf("%c. ", toupper(name[0]));
    }

    // Loop to find initials after spaces
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c. ", toupper(name[i + 1]));
        }
    }

    printf("\n");
    return 0;
}
