//Write a C program to print all numbers between 1 to 100 which divided by a specified number and the remainder will be 3.

#include <stdio.h>

int main() 
{
	int a,n;
	
	printf("\nInput an integer: ");
	scanf("%d", &n);
	
	for(a=1;a<100;a++)
	{
		if((a%n)==3)
		printf("\n %d ",a);
	}
	
	return 0;
}
