#include <stdio.h>

int main() {
    int n, arr[100];
    int total = 0, leftsum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (leftsum == total - leftsum - arr[i]) {
            printf("Pivot index: %d\n", i);
            return 0;
        }
        leftsum += arr[i];
    }

    printf("-1\n");
    return 0;
}
