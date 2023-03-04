#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf ("Enter any number to check if it is divisible by 5 and 11 or not:");
    scanf ("%d", &num);

    if  ((num % 5==0) && (num % 11==0))
    {
        printf("The Number %d is divisible by 5 and 11.", num);
    }
    else
    {
        printf("The Number %d is not divisible by 5 and 11.", num);
    }

    return 0;
}
