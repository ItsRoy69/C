//Write a C program to display sum of series 1 + 1/2 + 1/3 + ………. + 1/n.

#include <stdio.h>
int main() 
{
	float S = 0;
	int i,n;
	
	printf("\nInput value of n : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		S += (float)1/i;
    }
    printf("Sum =  %.2f\n", S);

	return 0;
}

