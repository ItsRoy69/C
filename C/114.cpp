//Write a C program that accepts two integers values and calculate the sum of all even values between them, exclusive input values.

#include <stdio.h>

int main () 
{
    int y, i, z;
    int l, m, n, ctr1 = 0, ctr2 = 0;

    printf("Input two numbers (integer values):\n");
    scanf("%d %d", &m, &n);

    ctr1 = 0;
    printf("\nSum of all even values between %d and %d\n",m,n);
    if (m > n)
    {
        for (l = n + 1; l < m; l++)
        {
            if (l % 2 == 0)
            {

                ctr1 += l;

            }
        }
        printf("%d\n", ctr1);
    }
    else
    {
        for (l = m + 1; l < n; l++)
        {
            if (l % 2 == 0)
            {
                ctr2 += l;
            }
        }
        printf("%d\n", ctr2);
    }
}
