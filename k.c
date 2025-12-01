#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int *P = (int *) malloc(n * sizeof(int));
    if (P == NULL) {
        printf("NO memory allocated");
        return 0;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &P[i]);
    }

    for (i = 0; i < n; i++) {
        printf("%d ", P[i]);
    }

    free(P);
    return 0;
}