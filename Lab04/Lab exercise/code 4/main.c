#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int num, n, i, last_digit;\
    int array[10];
    printf("Enter any number to find frequency of each digit of that number: \n");
    scanf("%d", &num);
    n=num;

    for (i=0; i < 10; i++)
        {
            array[i] = 0;
        }

    while (n != 0)
        {
            last_digit = n % 10;
            array[last_digit] = array[last_digit] + 1;
            n = n / 10;
        }

    for (i=0; i<10; i++)
    {
        if(array[i]>0)
        {
            printf("%d ---> %d \n", i, array[i]);
        }
    }
        return 0;
}
