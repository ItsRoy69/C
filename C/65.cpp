//Write a C program that prints out the prime numbers between 1 and 200. The output should be such that each row contains a maximum of 20 prime numbers.

#include <stdio.h>

  int main() 
  {
        int i, j, f, p = 0;

        printf("The prime numbers between 1 and 199 are:\n");
        for (i = 2; i < 199; i++) 
        {
            f = 1;
            for (j = 2; j <= i / 2 && f == 1; j++) 
            {
                if (i % j == 0) {
                f = 0;
                }
            }
            if (f == 1) 
            {
                printf("%5d ", i);
                p++;
                if (p % 10 == 0) 
                {
                printf("\n");
                }
            }
        }
        printf("\n");
        return 0;
  }
