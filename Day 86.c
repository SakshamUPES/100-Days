#include <stdio.h>

enum MenuChoice {
    ADD = 1,
    SUBTRACT = 2,
    MULTIPLY = 3,
    EXIT = 4
};

int main() {
    enum MenuChoice choice;
    int num1, num2;
    int result;
    
    printf("=== Calculator Menu ===\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("4. EXIT\n");
    printf("=======================\n");
    
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    if (choice < ADD || choice > EXIT) {
        printf("Invalid choice! Please select 1-4.\n");
        return 1;
    }
    
    if (choice == EXIT) {
        printf("Goodbye!\n");
        return 0;
    }
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        default:
            printf("Unexpected error!\n");
    }
    
    return 0;
}

