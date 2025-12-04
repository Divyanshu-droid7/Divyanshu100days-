#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5], top;
    int n = 5;

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
        printf("\n");
    }

    top = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks)
            top = s[i];
    }
    printf("Top Student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
