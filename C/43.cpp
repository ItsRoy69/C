//Write a C program that reads two integers p and q, print p number of lines in a sequence of 1 to q in a line.

#include <stdio.h>
int main() 
{
	int p, q, i, j = 1,x;
	
	printf("Input number of lines: ");
	scanf("%d", &p);
	
	printf("Number of characters in a line: ");
	scanf("%d", &q);
	
	for(i = 1; i <= p; i++) 
	{
		for(x = 0; x < q; x++) 
		{
			printf("%d ", j++);
		}
		printf("\n");
	}
	return 0;
}

