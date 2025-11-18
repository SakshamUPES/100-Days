#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define CHAR_RANGE 26

int main() {
    char s[1000], t[1000];
    printf("Enter first string (lowercase): ");
    scanf("%s", s);
    printf("Enter second string (lowercase): ");
    scanf("%s", t);

    int len_s = strlen(s);
    int len_t = strlen(t);

    // If lengths differ, cannot be anagrams
    if (len_s != len_t) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq_s[CHAR_RANGE] = {0};
    int freq_t[CHAR_RANGE] = {0};

    // Count character frequencies for both strings
    for (int i = 0; i < len_s; i++) {
        freq_s[s[i] - 'a']++;
        freq_t[t[i] - 'a']++;
    }

    // Compare frequency arrays
    for (int i = 0; i < CHAR_RANGE; i++) {
        if (freq_s[i] != freq_t[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}

