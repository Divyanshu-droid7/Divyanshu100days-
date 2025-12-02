#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("File cannot be opened\n");
        return 1;
    }

    printf("Enter text to append:\n");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);
    printf("Text appended successfully\n");
    return 0;
}
