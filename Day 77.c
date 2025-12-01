#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input_fp, *output_fp;
    int ch;

    input_fp = fopen("input.txt", "r");
    if (input_fp == NULL) {
        printf("Error: Cannot open input.txt for reading.\n");
        return 1;
    }

    output_fp = fopen("output.txt", "w");
    if (output_fp == NULL) {
        printf("Error: Cannot open output.txt for writing.\n");
        fclose(input_fp);
        return 1;
    }

    while ((ch = fgetc(input_fp)) != EOF) {
        fputc(toupper(ch), output_fp);
    }

    fclose(input_fp);
    fclose(output_fp);
    printf("Conversion complete: input.txt -> output.txt\n");
    return 0;
}
