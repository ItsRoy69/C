//Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.

#include <stdio.h>

int main() 
{
	int a;
		
	printf("\nInput an integer: ");
	scanf("%d", &a);
	
	if((a>=0) && (a%2==0))
	{
		printf("\nPositive Even");
	}
	else if((a<0) && (a%2==0))
	{
		printf("\nNegative Even");
	}
	else if((a>0) && (a%2!=0))
	{
		printf("\nPositive Odd");
	}
	else if((a<0) && (a%2!=0))
	{
		printf("\nPositive Negative");
	}
	
	
	return 0;	
}
