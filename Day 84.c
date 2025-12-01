#include <stdio.h>

enum Status {
    SUCCESS = 0,
    FAILURE = 1,
    TIMEOUT = 2
};

int main() {
    enum Status result;
    int input;
    
    printf("Status Code Checker\n");
    printf("0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT\n");
    printf("Enter status code (0-2): ");
    
    scanf("%d", &input);
    
    if (input < SUCCESS || input > TIMEOUT) {
        printf("Invalid status code! Use 0, 1, or 2 only.\n");
        return 1;
    }
    
    result = (enum Status)input;
    
    switch (result) {
        case SUCCESS:
            printf("Operation completed successfully!\n");
            printf("Status: %s (%d)\n", "SUCCESS", SUCCESS);
            break;
        case FAILURE:
            printf("Operation failed!\n");
            printf("Status: %s (%d)\n", "FAILURE", FAILURE);
            break;
        case TIMEOUT:
            printf("Operation timed out!\n");
            printf("Status: %s (%d)\n", "TIMEOUT", TIMEOUT);
            break;
        default:
            printf("Unknown status!\n");
    }
    
    return 0;
}
