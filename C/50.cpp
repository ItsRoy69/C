//Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5

#include <stdio.h>

int main() 
{
	int n[5],i;
	
	printf("Input the 5 members of the array:\n");
	for(i = 0; i < 5; i++) 
	{
		scanf("%d", &n[i]);
	}
	for(i = 0; i < 5; i++)
	 {
		if(n[i] < 5) 
		{
			printf("A[%d] = %d\n", i, n[i]);
		}
	}
	return 0;
}

