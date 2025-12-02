// Search for an element in an array using linear search.
#include <stdio.h>
int main() {
int a[100], n, i, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Found at position %d\n", i + 1);
            return 0;
        }
    }
    printf("Not found\n");
    return 0;
}