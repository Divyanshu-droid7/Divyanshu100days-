#include <stdio.h>

int main() {
    int n, arr[100];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Next Greater Elements:\n");
    for (int i = 0; i < n; i++) {
        int nge = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge = arr[j];
                break;
            }
        }
        printf("%d", nge);
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
 