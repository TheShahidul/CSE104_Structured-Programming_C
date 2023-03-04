#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, area, circumference;
    printf("Enter radius: ");
    scanf("%f", &r);
    //printf("Enter : ");
    //scanf("%f", &h);

    area = ((22*r*r)/7);
    printf("Area of Circle: %f \n", area);

    circumference = (22*2*r)/7;
    printf("Circumference of Circle: %f \n", circumference);

    return 0;
}
