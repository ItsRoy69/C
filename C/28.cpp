//Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values.

#include <stdio.h>

int main() 
{
	float a[5],sum=0,avg;
	int b,pctr=0;
	
	
	printf("\nInput the first number: ");
	scanf("%f", &a[0]);
	
	printf("Input the second number: ");
	scanf("%f", &a[1]);
	
	printf("Input the third number: ");
	scanf("%f", &a[2]);

	printf("Input the fourth number: ");
	scanf("%f", &a[3]);

	printf("Input the fifth number: ");
	scanf("%f", &a[4]);
	
	for(b=0;b<5;b++)
	{
		if(a[b]>0)
		{
			pctr++;
			sum+=a[b];
		}
	}
	avg=sum/pctr;
	
	printf("\nNumber of positive numbers: %d", pctr);
	printf("\nAverage value of the said positive numbers: %.2f", avg);
	return 0;
}
	
