#include <stdio.h>

int main() {
    int num, binary[32], i = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }
    while(num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary representation: ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}