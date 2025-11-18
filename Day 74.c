#include <stdio.h>

int main() {
    char src_filename[100], dest_filename[100];
    FILE *src_file, *dest_file;
    int ch;

    // Take filenames as input
    printf("Enter source filename: ");
    scanf("%s", src_filename);
    printf("Enter destination filename: ");
    scanf("%s", dest_filename);

    // Open source file in read mode
    src_file = fopen(src_filename, "r");
    if (src_file == NULL) {
        printf("Could not open source file %s\n", src_filename);
        return 1;
    }

    // Open destination file in write mode
    dest_file = fopen(dest_filename, "w");
    if (dest_file == NULL) {
        printf("Could not open destination file %s\n", dest_filename);
        fclose(src_file);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(src_file)) != EOF) {
        fputc(ch, dest_file);
    }

    printf("Content copied successfully from %s to %s\n", src_filename, dest_filename);

    // Close files
    fclose(src_file);
    fclose(dest_file);

    return 0;
}

