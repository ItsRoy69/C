//Write a C program that reads an integer and find all the divisors of the said integer.

#include <stdio.h>

int main ()
{
    int i, n;

    printf("Input a number (integer value):\n");
    scanf("%d", &n);

    printf("\nAll positive divisors of %d \n",n);
    for (i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {

            printf("%d\n", i);

        }
    }
}
