//Write a C program that accepts principle, rate of interest, time and compute the simple interest.

#include <stdio.h>

int main() 
{
	int p,r,t;
	float s=0;

	printf("\nInput Data");
	
	printf("\nInput principle: ");
	scanf("%d", &p);
	
	printf("Input Rate of interest: ");
	scanf("%d", &r);

	printf("Input time: ");
	scanf("%d", &t);
	
	s=(p*r*t)/100;
	printf("\nSimple interest = %.1f",s);
	
	return 0;
}
	

