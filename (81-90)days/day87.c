#include <stdio.h>

int main() {
    enum Roles {ADMIN=1, USER, GUEST};
    enum Roles role;

    printf("Enter user role (1=ADMIN, 2=USER, 3=GUEST): ");
    scanf("%d", &role);

    switch(role) {
        case ADMIN: printf("Welcome Admin! You have full access.\n"); break;
        case USER: printf("Welcome User! You have limited access.\n"); break;
        case GUEST: printf("Welcome Guest! You have view-only access.\n"); break;
        default: printf("Invalid role selected.\n");
    }

    return 0;
}
