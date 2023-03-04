#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, m, k;
    printf("Enter Centimeter value: ");
    scanf("%f", &c);

    m=c/100;
    printf("The Meter value is: %f\n",m);
    k=c/100000;
    printf("The Kilometer value is: %f\n",k);

    return 0;
}
