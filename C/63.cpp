//Write a C program that accepts a positive integer n less than 100 from the user and prints out the sum 14 + 24 + 44 + 74 + 114 + • • • + m4 ,


#include <stdio.h>

  int main() 
  {
    int i, j, n, sum = 0;
    
    printf("Input a positive number less than 100: \n");
    scanf("%d", & n);
    
    if (n < 1 || n >= 100)
	{
      printf("Wrong input\n");
      return 0;
    }
    
    j = 1;
    for (i = 1; j <= n; i++) 
	{
      sum += j * j * j * j;
      j += i;
    }
    
    printf("Sum of the series is %d\n", sum);
    return 0;
    
  }

