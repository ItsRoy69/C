//Write a C program to print a number, it’s square and cube in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user.

#include <stdio.h>
int main() 
{
	int a, i, x;
	
	printf("Input number of lines: ");
	scanf("%d", &a);
	
	for(i = 1; i <= a; i++) 
	{
		printf(" %d %d %d \n", i, i*i, i*i*i );
	}
	return 0;
}

