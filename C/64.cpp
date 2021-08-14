//Write a C program that accepts integers from the user until a zero or a negative number, display the number of positive values, the minimum value, the maximum value and the average of all numbers.

#include <stdio.h>

int main() 
{
	int a, c = 0, min, max, s = 0;
	double avg;  
	
	printf("Input a positive integer:\n");
	scanf("%d", &a);
	
	if (a <= 0) 
	{
	  printf("No positive number entered\n");
	  return 0;
	}
	
	min = a;
	max = a;
	
	while (a > 0) 
	{
	  s += a;
	  c++;
	  max_num = a > max ? a : max;
	  min_num = a < min ? a : min;
	  printf("Input next positive integer:\n");
	  scanf("%d", &a);
	}
	
	avg = s / (double) c;
	
	printf("Number of positive values entered is %d\n", c);
	printf("Maximum value entered is %d\n", max);
	printf("Minimum value entered is %d\n", min);
	printf("Average value is %0.4lf\n", avg);
	
	return 0;
 }

