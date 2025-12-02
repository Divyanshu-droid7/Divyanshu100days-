#include <stdio.h>

int main() {
    char s1[100], s2[100], temp[200];
    int i = 0, j = 0, found = 0;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    // remove newline
    while (s1[i] != '\n') i++;
    s1[i] = '\0';

    while (s2[j] != '\n') j++;
    s2[j] = '\0';

    // if lengths differ
    if (i != j) {
        printf("Not a rotation\n");
        return 0;
    }

    // temp = s1 + s1
    for (int k = 0; k < i; k++)
        temp[k] = s1[k];
    for (int k = 0; k < i; k++)
        temp[i + k] = s1[k];
    temp[2 * i] = '\0';

    // check s2 in temp
    for (int x = 0; temp[x] != '\0'; x++) {
        int y = 0;
        while (temp[x + y] == s2[y] && s2[y] != '\0')
            y++;
        if (s2[y] == '\0') {
            found = 1;
            break;
        }
    }

    if (found)
        printf("String is a rotation\n");
    else
        printf("String is NOT a rotation\n");

    return 0;
}
