#include <stdio.h>

int main() {
    int n, k, arr[100], temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    // Sort the array (Bubble Sort - simple)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if (k >= 1 && k <= n)
        printf("kth smallest element: %d\n", arr[k - 1]);
    else
        printf("Invalid k\n");

    return 0;
}
