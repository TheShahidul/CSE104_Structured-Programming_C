#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d, e, total, avg;

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &a);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &b);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &c);

    printf("Enter Marks of Subject 4: ");
    scanf("%f", &d);

    printf("Enter Marks of Subject 5: ");
    scanf("%f", &e);

    total = a + b + c + d + e;
    printf ("Total marks of the 5 subjects: %f = %f+%f+%f+%f+%f \n", total);
    avg = total/5;
    printf ("Average marks: %f", avg);

    return 0;
}
