#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];

    // Input details for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
        printf("\n");
    }

    // Print all student details
    printf("Student Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: Name=%s, Roll No=%d, Marks=%.2f\n",
               i+1, s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
