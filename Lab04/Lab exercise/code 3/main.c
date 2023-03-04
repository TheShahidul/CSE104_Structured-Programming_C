#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, product = 1;
    printf("Enter a valid integer to calculate the product of the digits of that integer: \n");
    scanf("%d", &num);

    while(num != 0)
          {
              product = product * (num % 10);
              num = num / 10;
          }
    printf("Product of digits of that number: %d \n", product);

    return 0;
}
