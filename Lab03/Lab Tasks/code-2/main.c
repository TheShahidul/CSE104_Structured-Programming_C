#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number1, number2;
    printf("Enter two different numbers:");
    scanf("%lf %lf", &number1, &number2);

    if  (number1>number2 && number1!=number2)
    printf("%lf is the largest number.", number1);

    else //(number1<number2)
    printf("%lf is the largest number.", number2);

    return 0;
}
