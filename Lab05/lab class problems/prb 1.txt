#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num, even_count, odd_count;
    //int even_count=0; odd_count=0;
    printf("How many numbers you want to input:\n");
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        printf("Enter the numbers: \n");
        scanf("%d", &num);
        if  (num % 2 == 0)
        {
            printf("%d is an even number.\n", num);
            even_count++;
        }
        else {
            printf("%d is an odd number. \n", num);
            odd_count++;
        }
    }
//    printf("Number of even numbers: %d", even_count);
  //  printf("Number of odd numbers: %d", odd_count);

    return 0;

}
