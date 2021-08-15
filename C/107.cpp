//Write a C program that accepts an integer and print next ten consecutive odd and even numbers. 

#include <stdio.h>

int main () 
{
  int a, i, ctr = 0;

  printf("Input an integer number:\n");
  scanf("%d", &a);

  printf("\nNext 10 consecutive odd numbers:\n");
  for (i = a+1; ctr < 10; i++)
  {

    if (i % 2 != 0)
    {

      printf("%d, ", i);
      ctr++;
      
    }
  }

  printf("\n\nNext 10 consecutive even numbers:\n");
  ctr=0;
  for (i = a+1; ctr < 10; i++)
  {

    if (i % 2 == 0)
    {

      printf("%d, ", i);
      ctr++;
      
    }
  }
}

