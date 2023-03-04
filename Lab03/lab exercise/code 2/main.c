#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers to find the maximum number:");
    scanf ("%d %d %d", &num1, &num2, &num3);

    if  (num1 >= num2 && num1>=num3)
    printf ("%d is the Maximum number.", num1);

    if  (num2 >= num1 && num2>=num3)
    printf ("%d is the Maximum number.", num2);

    if  (num3 >= num1 && num3>=num2)
    printf ("%d is the Maximum number.", num3);


    return 0;
}
