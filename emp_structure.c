#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main(){
    struct Employee emp1, emp2;

    printf("Enter details for Employee 1:\n");
    printf("ID: ");
    scanf("%d", &emp1.id);
    printf("Name: ");
    scanf("%s", emp1.name);
    printf("Salary: ");
    scanf("%.2f", &emp1.salary);

    printf("\nEmployee 1 Details:\n");
    printf("ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);

    return 0;
}