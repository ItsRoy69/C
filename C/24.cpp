//Write a C program that reads two integers and checks whether they are multiplied or not. 

#include <stdio.h>

int main() 
{
	int  a, b;
    printf("\nInput the first number: "); 
    scanf("%d", &a);
    printf("\nInput the second number: ");
    scanf("%d", &b);
  
    if(a > b) 
	{
		int temp;
		temp = a;
		a = b ;
		b = temp;
	}
	
	if((b % a)== 0) 
	{
		printf("\nMultiplied!\n");
	} 
	else 
	{
		printf("\nNot Multiplied!\n");
	}
	
	return 0;
}

