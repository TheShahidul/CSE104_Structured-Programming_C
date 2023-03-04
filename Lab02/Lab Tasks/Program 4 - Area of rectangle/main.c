
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, area;
    printf("Enter height: ");
    scanf("%d", &x);
    printf("Enter width: ");
    scanf("%d", &y);

    area = (x*y);
    printf("Area of rectangle: %d \n", area);

    //circumference = (22*2*r)/7;
    //printf("Circumference of Circle: %f \n", circumference);

    return 0;
}
