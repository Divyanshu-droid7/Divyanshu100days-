// Merge two arrays
#include <stdio.h>
int main() {
int a[50], b[50], c[100];
int n1, n2, i, k = 0;
    
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
        c[k] = a[i];
        k++;
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
        c[k] = b[i];
        k++;
    }

    printf("Merged array:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}