#include <stdio.h>

int main() {
    char str[100], newstr[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (!(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
              str[i]=='o' || str[i]=='u' ||
              str[i]=='A' || str[i]=='E' || str[i]=='I' ||
              str[i]=='O' || str[i]=='U')) {
            newstr[j++] = str[i];
        }
        i++;
    }

    newstr[j] = '\0';

    printf("String without vowels: %s\n", newstr);

    return 0;
}
