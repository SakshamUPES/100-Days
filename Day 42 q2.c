#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character and convert to uppercase if lowercase
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }

    printf("Converted string in uppercase: %s", str);

    return 0;
}
