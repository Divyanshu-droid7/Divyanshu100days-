#include <stdio.h>

int main() {
    int n, x;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            printf("Ceil index: %d\n", i);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
