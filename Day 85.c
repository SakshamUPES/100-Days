#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE = 11,
    TIMEOUT = 12
};

int main() {
    printf("Enum values starting from 10:\n");
    printf("============================\n");
    
    printf("SUCCESS  = %d\n", SUCCESS);
    printf("FAILURE  = %d\n", FAILURE);
    printf("TIMEOUT  = %d\n", TIMEOUT);
    
    printf("\nAll status codes:\n");
    for (int i = SUCCESS; i <= TIMEOUT; i++) {
        switch (i) {
            case SUCCESS:
                printf("Status %d: SUCCESS\n", SUCCESS);
                break;
            case FAILURE:
                printf("Status %d: FAILURE\n", FAILURE);
                break;
            case TIMEOUT:
                printf("Status %d: TIMEOUT\n", TIMEOUT);
                break;
        }
    }
    
    return 0;
}

