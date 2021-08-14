//Write a C program that accepts a distance in centimeters and prints the corresponding value in inches. 

#include <stdio.h>

int main() 
{
	int d;
	double s=0;

	printf("\nInput Data");
	
	printf("\nInput the distance in cm: ");
	scanf("%d", &d);
	
	s=(d*0.394);
	printf("\nDistance of %d cms is = %.3lf inches",d,s);
	
	return 0;
}
	

