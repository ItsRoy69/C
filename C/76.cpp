//Write a C program to calculate and prints the squares and cubes of the numbers from 0 to 20 and uses tabs to display them in a table of values.

#include <stdio.h>

int main() 
{
	int i;

	printf("Number Square Cube");
	printf("=========================");
	
    for(i = 1; i <= 20; i++) 
    {
		printf("%d %d %d\n", i, i*i, i*i*i);
	}
	
	return 0;
}
