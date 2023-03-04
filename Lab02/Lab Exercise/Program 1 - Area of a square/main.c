
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, area;
    printf("Enter the length of one side of a square: ");
    scanf("%d", &x);

    area = (x*x);
    printf("Area of the Square: %d \n", area);

    return 0;
}

