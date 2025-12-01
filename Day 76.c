
#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[256];
    FILE *fp;
    char line[1024];

    printf("Enter the filename: ");
    if (fgets(filename, sizeof(filename), stdin) == NULL) {
        printf("Error reading filename.\n");
        return 1;
    }
    
    // Remove newline from filename if present
    filename[strcspn(filename, "\n")] = 0;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file '%s' for reading.\n", filename);
        return 1;
    }

    printf("Contents of '%s':\n", filename);
    printf("==================\n");
    
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    
    fclose(fp);
    return 0;
}
