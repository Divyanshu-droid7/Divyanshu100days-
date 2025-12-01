#include <stdio.h>

int main() {
    char str[100];
    int i = 0, len = 0, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
        len++;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("String is a palindrome\n");
    else
        printf("String is not a palindrome\n");

    return 0;
}
