#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[50];
    double sales, rate, commision = 0;
    printf("Name of Salesman: ");
    scanf("%[^\n]%*c", &name);
    printf("Total Sales: ");
    scanf("%lf", &sales);

    if(sales >= 6001)commision = sales * 0.15;
    else if(sales >=4001) commision = sales * 0.12;
    else if(sales >= 1001) commision = sales * 0.08;
    else if(sales >= 1) commision = sales * 0.03;
    else printf("Invalid input of sales");
    printf("\nName of Salesman: %s\n", name);
    printf("Total Sales: P%.2lf\n", sales);
    printf("Commision Earned: P%.2lf\n", commision);

    return 0;
}
