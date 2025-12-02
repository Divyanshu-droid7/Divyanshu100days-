#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printf("%c.", name[0]);

    while (name[i] != ' ' && name[i] != '\0')
        i++;

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != '\n' &&
            name[i + 1] != '\0' && name[i + 2] != '\0') {
            printf("%c.", name[i + 1]);
        }
        i++;
    }

    i--;
    while (i >= 0 && name[i] != ' ')
        i--;
    i++;

    printf(" ");
    while (name[i] != '\0' && name[i] != '\n') {
        printf("%c", name[i]);
        i++;
    }

    printf("\n");
    return 0;
}
