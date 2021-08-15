//Write a C program to find and print the square of each even and odd values between 1 and a given number (4 < n < 101).

#include <stdio.h>
#include <math.h>

int main () 
{
    int x, cont = 0, i;

    printf("Input a number(integer): ");
    scanf("%d", &x);

    if (x>=5 && x<=100);
    {
        printf("\nSquare of each even between 1 and %d:\n",x);
        for (i = 1; i <= x; i++)
        {
            if (i % 2 == 0)
            {
                cont = pow(i, 2);
                printf("%d^2 = %d\n", i, cont);
            }
        }
        printf("\nSquare of each odd between 1 and %d:\n",x);
        for (i = 1; i <= x; i++)
        {

            if (i % 2 != 0)
            {
                cont = pow(i, 2);
                printf("%d^2 = %d\n", i, cont);
            }
        }
    }
}
