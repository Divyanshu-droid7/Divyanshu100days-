#include <stdio.h>

int main() {
    enum Traffic {RED, YELLOW, GREEN};
    enum Traffic light;

    printf("Enter traffic light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &light);

    switch (light) {
        case RED: printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN: printf("Go\n"); break;
        default: printf("Invalid input\n");
    }

    return 0;
}
