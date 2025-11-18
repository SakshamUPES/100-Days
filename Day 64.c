#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[1000];
    printf("Enter the string: ");
    scanf("%s", s);

    int n = strlen(s);
    int max_len = 0;

    for (int i = 0; i < n; i++) {
        bool visited[256] = {false};  // Track characters in the current substring
        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)s[j]]) {
                // Character already seen, stop expanding this substring
                break;
            } else {
                visited[(unsigned char)s[j]] = true;
                int curr_len = j - i + 1;
                if (curr_len > max_len) {
                    max_len = curr_len;
                }
            }
        }
    }

    printf("Length of the longest substring without repeating characters is: %d\n", max_len);

    return 0;
}

