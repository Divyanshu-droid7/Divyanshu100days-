#include <stdio.h>

int main() {
    int n, k, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    int maxsum = 0;
    for (int i = 0; i < k; i++)
        maxsum += arr[i];

    int currsum = maxsum;

    for (int i = k; i < n; i++) {
        currsum = currsum + arr[i] - arr[i - k];
        if (currsum > maxsum)
            maxsum = currsum;
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, maxsum);
