#include <stdio.h>

enum TrafficLight {
    RED = 0,
    YELLOW = 1,
    GREEN = 2
};

int main() {
    enum TrafficLight light;
    int input;
    
    printf("Traffic Light Control\n");
    printf("0 = RED, 1 = YELLOW, 2 = GREEN\n");
    printf("Enter traffic light value (0-2): ");
    
    scanf("%d", &input);
    
    if (input < RED || input > GREEN) {
        printf("Invalid input! Use 0, 1, or 2 only.\n");
        return 1;
    }
    
    light = (enum TrafficLight)input;
    
    switch (light) {
        case RED:
            printf("STOP!\n");
            break;
        case YELLOW:
            printf("WAIT!\n");
            break;
        case GREEN:
            printf("GO!\n");
            break;
        default:
            printf("Unknown signal!\n");
    }
    
    return 0;
}
