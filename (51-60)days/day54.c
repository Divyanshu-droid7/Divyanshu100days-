#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int total = n * (n + 1) / 2; 
    int leftsum = 0;

    for (int x = 1; x <= n; x++) {
        leftsum += x;
        int rightsum = total - (leftsum - x);
        if (leftsum == rightsum) {
            printf("Pivot integer: %d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
