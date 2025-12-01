#include <stdio.h>

enum Day {
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Day current_day;
    
    printf("Days of the week and their enum values:\n");
    printf("=====================================\n");
    
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        current_day = (enum Day)i;
        switch (current_day) {
            case SUNDAY:
                printf("SUNDAY     = %d\n", SUNDAY);
                break;
            case MONDAY:
                printf("MONDAY     = %d\n", MONDAY);
                break;
            case TUESDAY:
                printf("TUESDAY    = %d\n", TUESDAY);
                break;
            case WEDNESDAY:
                printf("WEDNESDAY  = %d\n", WEDNESDAY);
                break;
            case THURSDAY:
                printf("THURSDAY   = %d\n", THURSDAY);
                break;
            case FRIDAY:
                printf("FRIDAY     = %d\n", FRIDAY);
                break;
            case SATURDAY:
                printf("SATURDAY   = %d\n", SATURDAY);
                break;
        }
    }
    
    return 0;
}

