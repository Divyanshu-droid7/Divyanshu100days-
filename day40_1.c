#include <stdio.h>

int main() {
    int r, c;
    int a[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("\nDiagonal Traversal:\n");

    for (int d = 0; d < r + c - 1; d++) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (i + j == d)
                    printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
