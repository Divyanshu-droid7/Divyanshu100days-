#include <stdio.h>

int main() {
    enum Menu {ADD=1, SUBTRACT, MULTIPLY};
    enum Menu choice;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation (1=ADD, 2=SUBTRACT, 3=MULTIPLY): ");
    scanf("%d", &choice);

    switch(choice) {
        case ADD: printf("Result: %d\n", a + b); break;
        case SUBTRACT: printf("Result: %d\n", a - b); break;
        case MULTIPLY: printf("Result: %d\n", a * b); break;
        default: printf("Invalid choice\n");
    }

    return 0;
}
