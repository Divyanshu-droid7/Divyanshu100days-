#include <stdio.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: input.txt not found\n");
        return 1;
    }

    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Cannot create output.txt\n");
        fclose(in);
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;  // convert to uppercase
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Text converted to uppercase and saved in output.txt\n");
    return 0;
}
