//Write a C program that swaps two numbers without using third variable.

#include <stdio.h>

int main() 
{
	int a,b;
	
	printf("\nInput the First variable: ");
	scanf("%d", &a);
	printf("Input the Second variable: ");
	scanf("%d", &b);
	
	printf("\nBefore swapping the value of x & y: %d & %d", a,b );
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nAfter swapping the value of x & y: %d & %d", a,b );
	return 0;
}
