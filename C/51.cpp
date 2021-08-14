//Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array.

#include <stdio.h>

int main() 
{
	int n[6],i,j;
	
	printf("Input the 6 members of the array:\n");
	for(i = 0; i < 6; i++) 
	{
		scanf("%d", &n[i]);
	}
	for(i = 0; i < 6; i++)
	{
		if(i<(3))
		{
			j=n[i];
			n[i]=n[6-(i+1)];
			n[6-(i+1)]=j;
		}
		  printf("array_n[%d] = %d\n", i, n[i]);
	}
	
	  
		
	
	return 0;
}

