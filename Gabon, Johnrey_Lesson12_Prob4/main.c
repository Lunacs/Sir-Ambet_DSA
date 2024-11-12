#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    double area = 0;

    printf("AREA CALCULATOR");
    printf("\nPress a number to calculate area of a shape\n");
           printf("(1) Triangle\n(2) Circle\n(3) Square\n(4) Rectangle\n");
           printf("> ");
           scanf("%d", &input);

    switch(input){
    case 1:
        {
            double base, height;
            printf("\nAREA OF TRIANGLE CALCULATOR\n");
            printf("Enter the base: ");
            scanf("%lf", &base);
            printf("Enter the height: ");
            scanf("%lf", &height);

            area = 0.5 * base * height;
            printf("Area of Triangle: %.2lf\n", area);
        }
        break;
    case 2:
        {
            const double PI = 3.14159;
            double radius;

            printf("\nAREA OF CIRCLE CALCULATOR\n");
            printf("Enter the radius: ");
            scanf("%lf", &radius);

            area = PI * radius * radius;
            printf("Area of Circle: %.2lf\n", area);
        }
        break;
    case 3:
        {
            double side;
            printf("\nAREA OF SQUARE CALCULATOR\n");
            printf("Enter the side: ");
            scanf("%lf", &side);

            area = side * side;
            printf("Area of Square: %.2lf\n", area);
        }
        break;
    case 4:
        {
            double length, width;
            printf("\nAREA OF RECTANGLE CALCULATOR\n");
            printf("Enter the length: ");
            scanf("%lf", &length);
            printf("Enter the width: ");
            scanf("%lf", &width);

            area = length * width;
            printf("Area of Rectangle: %.2lf\n", area);
        }
        break;
    default:
        printf("Error: Invalid input choice\n");
        break;
    }
    return 0;
}
