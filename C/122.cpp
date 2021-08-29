//Write a C program that reads two integers m, n and compute the sum of n even numbers starting from m. 

#include <stdio.h>

int main ()
{
    int m, n, i, j, k, sum = 0;

    printf("\nInput two integes (m, n):\n");
    scanf("%d %d", &m, &n);

    printf("\nSum of %d even numbers starting from %d: ",n,m);
    
    for (k = 0, j = m; k < n; j++)
    {
        if (j % 2 == 0)
        {
            sum += j;
            k++;
        }
    }
    printf("\n%d", sum);
  }
