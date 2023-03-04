#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, factorial=1;
    printf("Enter a number to find the factorial of that number:\n");
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        factorial=factorial*i;
    }
    printf("Factorial of number is: %d\n", factorial);
    return 0;
}
