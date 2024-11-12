#include <stdio.h>
#include <stdlib.h>

int main()
{
    double hoursWorked, wage = 0;

    printf("Enter hours worked: ");
    scanf("%lf", &hoursWorked);

    if(hoursWorked <= 10) wage = hoursWorked * 60;
    else if(hoursWorked <= 16) wage = (10 * 60) + (hoursWorked - 10) * 15;
    else if(hoursWorked <= 20) wage = (10 * 60) + (6 * 15) + (hoursWorked - 16) * 18;
    else wage = (10 * 60) + (6 * 15) + (4 * 18) + (hoursWorked - 20) * 25;

    printf("\nYour total wage is P%.2lf\n", wage);

    return 0;
}
