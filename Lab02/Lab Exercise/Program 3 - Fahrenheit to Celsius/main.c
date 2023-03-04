#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F, C, result;
    printf("Enter the temperature in Fahrenheit: ");
    scanf ("%f", &F);

    result = ((F-32)/1.8);
    printf ("Celsius: %f \n", result);

    return 0;
}
