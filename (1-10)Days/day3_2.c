#include <stdio.h>

int main() {
    int x, y, swap;
    
    printf("Enter the first number (x): ");
    scanf("%d", &x);

    printf("Enter the second number (y): ");
    scanf("%d", &y);
    
    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap = x;
    x = y;
    y = swap;

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}