#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];
    char newDate[20];

    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    // Remove newline if any
    date[strcspn(date, "\n")] = 0;

    // Extract day, month, year from input string
    sscanf(date, "%2s/%2s/%4s", day, month, year);

    // Replace month "04" with "Apr"
    if (strcmp(month, "04") == 0) {
        sprintf(newDate, "%s-Apr-%s", day, year);
        printf("Date in dd-Apr-yyyy format: %s\n", newDate);
    } else {
        printf("Month is not 04. No conversion done.\n");
    }

    return 0;
}
