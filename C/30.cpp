//Write a C program to find and print the square of each one of the even values from 1 to a specified value.

#include <stdio.h>

int main() 
{
	int a,b,c;
		
	printf("\nInput an integer to find the square: ");
	scanf("%d", &a);
	
	printf("List of square of each one of the even values from 1 to a %d : ", a);
	
	for(b=1; b<=a; b++)
	{
		if(b%2==0)
		{
			c=b*b;
				printf("\n %d ^ %d = %d", b,b,c);
		}
		
	}

	return 0;	
}

