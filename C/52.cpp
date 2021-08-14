//Write a C program to read an array of length 6 and find the smallest element and its position.

#include <stdio.h>

int main() 
{
	int e, i, f, p,v[e];

	printf("\nInput the length of the array: ");
	scanf("%d", &e);

	printf("\nInput the array elements:\n");
	for(i = 0; i < e; i++) 
	{
			scanf("%d", &v[i]);
	}
	f = v[0];
	p = 0;
	
	for(i = 0; i < e; i++) 
	{
		if(f > v[i]) 
		{
			f = v[i];
			p = i;
		}
	}
	
	printf("Smallest Value: %d\n", f);
	printf("Position of the element: %d\n", p);
	return 0;
}

