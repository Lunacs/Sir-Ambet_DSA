#include <stdio.h>
#include <string.h>

#define NUM_EMPLOYEES 5

struct emp
{
    char empFName[50];
    char empLName[50];
    int baseSalary;
    int overTimeHours;
};

int main()
{
    struct emp employees[NUM_EMPLOYEES];
    int i;

    // Reading employee details
    for (i = 0; i < NUM_EMPLOYEES; i++)
    {
        printf("Enter first name: ");
        scanf("%s", employees[i].empFName);

        printf("Enter last name: ");
        scanf("%s", employees[i].empLName);

        printf("Enter base salary: ");
        scanf("%d", &employees[i].baseSalary);

        printf("Enter the overtime hours: ");
        scanf("%d", &employees[i].overTimeHours);
        printf("\n");
    }

    printf("\nEmployee Monthly Salaries:\n");

    // Calculating and displaying salaries
    for (i = 0; i < NUM_EMPLOYEES; i++)
    {
        int monthlySalary = employees[i].baseSalary + (employees[i].overTimeHours * 20);
        printf("%s %s %d\n", employees[i].empFName, employees[i].empLName, monthlySalary);
    }

    return 0;
}
