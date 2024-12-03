#include <stdio.h>
#define MAX_EMPLOYEES 50

struct Employee
{
    char firstName[50];
    char lastName[50];
    char personID[20];
    int deptID;
    double yearlySalary;
    double monthlySalary;
    double monthlyBonus;
    double yearToDatePaid;
};

int main()
{
    struct Employee employees[MAX_EMPLOYEES];
    int counter;
    struct Employee employee1 = {"Elliot", "Anderson", "12345", 101, 60000, 0, 0, 0};
    struct Employee employee2 = {"Freddie", "Mercury", "67890", 102, 75000, 0, 0, 0};
    struct Employee employee3 = {"Mark", "Zuckerberg", "13579", 103, 50000, 0, 0, 0};

    employees[0] = employee1;
    employees[1] = employee2;
    employees[2] = employee3;

    for (counter = 0; counter < 3; counter++)
    {
        employees[counter].monthlySalary = employees[counter].yearlySalary / 12;
        employees[counter].yearToDatePaid = 0.0;
        employees[counter].monthlyBonus = 0.0;
    }
    double payCheck;
    for (counter = 0; counter < 3; counter++)
    {
        printf("%s %s: ", employees[counter].firstName, employees[counter].lastName);
        payCheck = employees[counter].monthlySalary + employees[counter].monthlyBonus;
        employees[counter].yearToDatePaid = employees[counter].yearToDatePaid + payCheck;

        printf("%.2lf\n", payCheck);
    }

    return 0;
}
