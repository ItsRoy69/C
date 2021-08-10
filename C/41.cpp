//Write a C program to print 3 numbers in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user.


#include <stdio.h>
int main() 
{
	int a, i, j = 1,x;
	
	printf("Input number of lines: ");
	scanf("%d", &a);
	
	for(i = 1; i <= a; i++) 
	{
		for(x = 0; x < 3; x++) 
		{
			printf("%d ", j++);
		}
		printf("\n");
	}
	return 0;
}

