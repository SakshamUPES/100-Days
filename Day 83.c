#include <stdio.h>

enum Month {
    JANUARY = 1, FEBRUARY, MARCH, APRIL, 
    MAY, JUNE, JULY, AUGUST,
    SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    printf("Days in each month:\n");
    printf("==================\n");
    
    for (int i = JANUARY; i <= DECEMBER; i++) {
        printf("%11s: ", "");  // Spacing
        
        switch (i) {
            case JANUARY:
                printf("JANUARY  ");
                break;
            case FEBRUARY:
                printf("FEBRUARY");
                break;
            case MARCH:
                printf("MARCH    ");
                break;
            case APRIL:
                printf("APRIL    ");
                break;
            case MAY:
                printf("MAY      ");
                break;
            case JUNE:
                printf("JUNE     ");
                break;
            case JULY:
                printf("JULY     ");
                break;
            case AUGUST:
                printf("AUGUST   ");
                break;
            case SEPTEMBER:
                printf("SEPTEMBER");
                break;
            case OCTOBER:
                printf("OCTOBER  ");
                break;
            case NOVEMBER:
                printf("NOVEMBER ");
                break;
            case DECEMBER:
                printf("DECEMBER ");
                break;
        }
        printf("= %d days\n", days[i]);
    }
    
    printf("\nNote: February has 28 days (29 in leap years)\n");
    return 0;
}

