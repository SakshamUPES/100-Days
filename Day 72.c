#include <stdio.h>

int main() {
    FILE *file;
    char line[256];

    // Open the file in read mode
    file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Could not open info.txt\n");
        return 1;
    }

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}

