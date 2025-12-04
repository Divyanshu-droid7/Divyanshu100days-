// Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    struct Employee *emp;

    emp = (struct Employee *)malloc(sizeof(struct Employee));

    if (emp == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);
    printf("Enter Name: ");
    scanf("%s", emp->name);
    printf("Enter Salary: ");
    scanf("%f", &emp->salary);

    printf("\nEmployee Details:\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n",
           emp->id, emp->name, emp->salary);

    free(emp);

    return 0;
}
