#include <stdio.h>

int main() {
    enum Colors {RED, GREEN, BLUE, YELLOW};
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};

    for (int i = RED; i <= YELLOW; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
