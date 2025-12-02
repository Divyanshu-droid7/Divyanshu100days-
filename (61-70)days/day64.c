#include <stdio.h>

int main() {
    char s[1000];
    int last[256];
    
    for (int i = 0; i < 256; i++)
        last[i] = -1;

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    int maxLen = 0, start = 0;

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (last[(unsigned char)s[i]] >= start)
            start = last[(unsigned char)s[i]] + 1;

        last[(unsigned char)s[i]] = i;

        int len = i - start + 1;
        if (len > maxLen)
            maxLen = len;
    }

    printf("Length of longest substring: %d\n", maxLen);
    return 0;
}
 