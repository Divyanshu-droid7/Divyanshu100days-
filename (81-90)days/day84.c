#include <stdio.h>

int main() {
    enum Status {SUCCESS, FAILURE, TIMEOUT};
    enum Status s;

    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d", &s);

    switch (s) {
        case SUCCESS: printf("Operation Successful\n"); break;
        case FAILURE: printf("Operation Failed\n"); break;
        case TIMEOUT: printf("Operation Timed Out\n"); break;
        default: printf("Invalid status\n");
    }

    return 0;
}
