#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    printf("Enter side a: ");
    scanf("%d", &a);
    printf("Enter side b: ");
    scanf("%d", &b);
    printf("Enter side c: ");
    scanf("%d", &c);

    if(a+b > c && a+c > b && b+c > a){
        if(a == b && b == c){
            printf("\nThat is a Equilateral Triangle!\n");
        }else if(a == b || b == c || c == a){
            printf("\nThat is a Isosceles Triangle!\n");
        }else printf("\nThat is a Scalene Triangle!\n");
    }
    return 0;
}
