//Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80.

#include <stdio.h>

int main() 
{
	int a;  	
	
	printf("\nInput an integer: "); 
    scanf("%i", &a);
		
    if(a > 0 && a <= 20)
	{
		printf("\n Range :[0, 20]");
	} 
	
	else if(a > 21 && a <= 40)
	{
		printf("\n Range :[21, 40]");
	} 
	
	else if(a > 41 && a <= 60)
	{
		printf("\n Range :[41, 60]");
	} 
	
	else if(a > 61 && a <= 80)
	{
		printf("\n Range :[61, 80]");
	} 
	
	else
	{
		printf("\n Number is not in range.");
	}
	
	return 0;
}
