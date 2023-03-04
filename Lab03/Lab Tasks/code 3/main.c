#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num;
    printf("Enter a number:");
    scanf("%lf", &num);

    if  (num<0.0)
    printf("You entered negative number.");

    else if  (num>0.0)
    printf("You entered positive number.");

        else
    printf("The number is 0.");

    return 0;
}
