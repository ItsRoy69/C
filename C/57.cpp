//Write a C program to reverse and print a given number

#include <stdio.h>

int main() 
{
	int i,r=0,x;
	
	printf("\nThe original number = ");
	scanf("%d", &i);
	while(i>=1)
	{
		x=i%10;
		r=r*10+x;
		i=i/10;
	}
	printf("\nThe reverse of the said number = %d",r);
	return 0;
}
