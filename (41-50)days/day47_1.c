#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int count[26] = {0};
    int i = 0;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    while (s1[i] != '\0' && s1[i] != '\n') {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            count[s1[i] - 'a']++;
        i++;
    }

    i = 0;
 
    while (s2[i] != '\0' && s2[i] != '\n') {
        if (s2[i] >= 'a' && s2[i] <= 'z')
            count[s2[i] - 'a']--;
        i++;
    }
    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Strings are NOT anagrams\n");
            return 0;
        }
    }

    printf("Strings are anagrams\n");
    return 0;
}
