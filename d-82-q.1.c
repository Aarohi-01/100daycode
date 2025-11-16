#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

void print_action(enum TrafficLight light) {
    switch (light) {
        case RED:
            printf("RED    -> Stop\n");
            break;
        case YELLOW:
            printf("YELLOW -> Wait\n");
            break;
        case GREEN:
            printf("GREEN  -> Go\n");
            break;
    }
}

int main() {
    printf("Traffic Light Status:\n");
    printf("-----------------------\n");
    
    enum TrafficLight current_light;

    current_light = RED;
    print_action(current_light);

    current_light = YELLOW;
    print_action(current_light);

    current_light = GREEN;
    print_action(current_light);

    return 0;
}