#include <stdio.h>
#include <stdlib.h>

int main()
{  // int n;
    //printf("Enter a number to make a number triangle: \n");
    //scanf("%d", &n);

    for (int i=1; i<=5; i++) {
    printf("\n");
    for (int j=1; j<=i; j++)
        printf("%5d", 6-i);
   }
    return 0;
}
