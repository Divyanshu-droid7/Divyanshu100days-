#include <stdio.h>

int main() {
    int dd, mm, yyyy;
    char month[12][4] = {"Jan","Feb","Mar","Apr","May","Jun",
                          "Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    printf("New format: %02d-%s-%d\n", dd, month[mm - 1], yyyy);

    return 0;
}
