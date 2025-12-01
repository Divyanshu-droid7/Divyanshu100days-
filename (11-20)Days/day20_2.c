// Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
int binary, digit, result = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while(binary != 0) {
        digit = binary % 10;

        if(digit == 0)
            result = result + (1 * place);
        else
            result = result + (0 * place);

        binary = binary / 10;
        place = place * 10;
    }
    printf("1's complement: %d\n", result);

    return 0;
}