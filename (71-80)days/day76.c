#include <stdio.h>

int main() {
    FILE *fp;
    char fname[50], ch;

    printf("Enter filename: ");
    scanf("%s", fname);

    fp = fopen(fname, "r");

    if (fp == NULL) {
        printf("Error: File does not exist\n");
        return 1;
    }

    printf("File contents:\n");
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}
 