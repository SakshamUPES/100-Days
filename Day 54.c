#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int x = 1; x <= n; x++) {
        
        int sum1 = x * (x + 1) / 2;
        int sum2 = n * (n + 1) / 2 - (x - 1) * x / 2;

        if (sum1 == sum2) {
            printf("%d\n", x);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
