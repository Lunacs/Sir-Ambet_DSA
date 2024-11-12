#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int input;
    double volume = 0;
    const double PI = 3.14159265359;

    printf("VOLUME CALCULATOR");
    printf("\nPress a number to calculate volume of a shape\n");
    printf("(1) Cube\n(2) Cuboid\n(3) Cylinder\n(4) Sphere\n");
    printf("> ");
    scanf("%d", &input);

    switch(input) {
    case 1:
        {
            double side;
            printf("\nVOLUME OF CUBE CALCULATOR\n");
            printf("Enter the side: ");
            scanf("%lf", &side);

            volume = side * side * side;
            printf("Volume of Cube: %.2lf\n", volume);
        }
        break;
    case 2:
        {
            double length, width, height;

            printf("\nVOLUME OF CUBOID CALCULATOR\n");
            printf("Enter the length: ");
            scanf("%lf", &length);
            printf("Enter the width: ");
            scanf("%lf", &width);
            printf("Enter the height: ");
            scanf("%lf", &height);

            volume = length * width * height;
            printf("Volume of Cuboid: %.2lf\n", volume);
        }
        break;
    case 3:
        {
            double radius, height;
            printf("\nVOLUME OF CYLINDER CALCULATOR\n");
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            printf("Enter the height: ");
            scanf("%lf", &height);

            volume = PI * (radius * radius) * height;
            printf("Volume of Cylinder: %.2lf\n", volume);
        }
        break;
    case 4:
        {
            double radius;
            printf("\nVOLUME OF SPHERE CALCULATOR\n");
            printf("Enter the radius: ");
            scanf("%lf", &radius);

            volume = (4.0/3.0) * PI * (radius * radius * radius);
            printf("Volume of Sphere: %.2lf\n", volume);
        }
        break;
    default:
        printf("Error: Invalid input choice\n");
        break;
    }
    return 0;
}