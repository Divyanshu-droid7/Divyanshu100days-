#include <stdio.h>

int main() {
    int n, arr[100], seen[100] = {0};

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (seen[arr[i]]) {
            printf("Repeated element: %d\n", arr[i]);
            return 0;
        }
        seen[arr[i]] = 1;
    }

    return 0;
}
