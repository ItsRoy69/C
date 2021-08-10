//Write a C program that reads an integer and find all its divisor.

#include<stdio.h>

int main()
{
	int a, i;
	
	printf("Input an integer:");
	scanf("%d", &a);
	
	printf("All the divisor of %d are: ", a);
	for(i = 1; i <= a; i++) 
	{
		if((a%i) == 0)
		{
			printf("\n%d", i);
		}
	}
	return 0;
}

