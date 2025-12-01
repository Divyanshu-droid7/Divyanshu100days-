#include <stdio.h>

int main() {
    int day;

    printf("Enter a number: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Day: Monday\n");
            break;
        case 2:
            printf("Day: Tuesday\n");
            break;
        case 3:
            printf("Day: Wednesday\n");
            break;
        case 4:
            printf("Day: Thursday\n");
            break;
        case 5:
            printf("Day: Friday\n");
            break;
        case 6:
            printf("Day: Saturday\n");
            break;
        case 7:
            printf("Day: Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}