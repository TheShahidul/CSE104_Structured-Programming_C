#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, first_digit, last_digit, sum;

    //printf("Sum of first and last digit of given number: \n", sum);
    //printf("Enter any integer to find first and last digit: \n");
    scanf("%d", &n);

    first_digit = n;
    last_digit = n % 10;
    //sum = first_digit + last_digit;

    while (first_digit >= 10)
        {
        first_digit = first_digit / 10;
        }

    //printf("First digit: %d \nLast digit: %d\n", first_digit, last_digit);

    sum = first_digit + last_digit;
    printf("Sum of first and last digit of given number: %d\n", sum);

    return 0;
}
