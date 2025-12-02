#include <stdio.h>

int main() {
    enum Status {SUCCESS=5, FAILURE=10, TIMEOUT=15};

    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}
