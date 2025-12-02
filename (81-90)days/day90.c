#include <stdio.h>

int main() {
    enum Gender {MALE, FEMALE, OTHER};

    struct Person {
        char name[50];
        enum Gender gender;
    };

    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    scanf("%d", &p.gender);

    const char *genderNames[] = {"MALE", "FEMALE", "OTHER"};

    printf("Name: %s, Gender: %s\n", p.name, genderNames[p.gender]);

    return 0;
}
