#include <stdio.h>

int main() {
    int n, arr[100], sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    printf("Missing number: %d\n", total - sum);

    return 0;
}
