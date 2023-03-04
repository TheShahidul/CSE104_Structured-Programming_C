#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, c;
    printf("Enter Number 1: ");
    scanf("%d", &x);
    printf("Enter Number 2: ");
    scanf("%d", &y);

    c = (x+y);
    printf("Addition: %d \n", c);
    c = (x-y);
    printf("Substraction: %d \n", c);
    c = (x*y);
    printf("Multiplication: %d \n", c);
    c = (x/y);
    printf("Dividend: %d \n", c);
    c = (x%y);
    printf("Remainder: %d \n", c);
    //circumference = (22*2*r)/7;
    //printf("Circumference of Circle: %f \n", circumference);

    return 0;
}
