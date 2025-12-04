// Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    struct Employee emp;
    FILE *fp;

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Name: ");
    scanf("%s", emp.name);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    fread(&emp, sizeof(emp), 1, fp);

    printf("\nEmployee Details from file:\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n",
           emp.id, emp.name, emp.salary);

    fclose(fp);
    return 0;
}
