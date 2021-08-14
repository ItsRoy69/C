//Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.

#include <stdio.h>

int main() 
{
	float a[5];
	int b,pctr=0,nctr=0;
	
	
	printf("\nInput the first number: ");
	scanf("%d", &a[0]);
	
	printf("Input the second number: ");
	scanf("%d", &a[1]);
	
	printf("Input the third number: ");
	scanf("%d", &a[2]);

	printf("Input the fourth number: ");
	scanf("%d", &a[3]);

	printf("Input the fifth number: ");
	scanf("%d", &a[4]);
	
	for(b=0;b<5;b++)
	{
		if(a[b]>0)
		{
			pctr++;
		}
		
		else
		{
			nctr++;
		}
	}
	printf("\nNumber of positive numbers: %d", pctr);
	printf("\nNumber of negative numbers: %d", nctr);
	printf("\n");
	
	return 0;
}




