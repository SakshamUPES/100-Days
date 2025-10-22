#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to check if str2 is rotation of str1
int areRotations(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are not same, they can't be rotations
    if (len1 != len2)
        return 0;

    // Create a temporary string by concatenating str1 with itself
    char *temp = (char *)malloc(len1 * 2 + 1);
    strcpy(temp,
