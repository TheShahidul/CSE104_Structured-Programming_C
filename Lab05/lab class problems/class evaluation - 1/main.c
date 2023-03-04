#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, remainder, reverse=0;
    printf("Enter a number:\n");
    scanf("%d", &n);

    for (;n != 0;){
        remainder=n%10;
        reverse=(reverse*10)+remainder;
        n=n/10;
    }
    printf("Reverse number is: %d", reverse);
    return 0;
}
