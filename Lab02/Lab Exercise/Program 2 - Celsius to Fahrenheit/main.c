#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, F, Result;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &C);

    Result = (((F-32)*5)/9);
    printf("Celsius: %f \n", Result);

    return 0;
}
