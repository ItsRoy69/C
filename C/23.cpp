//Write a C program that reads three floating values and check if it is possible to make a triangle with them. Also calculate the perimeter of the triangle if the said values are valid.

#include <stdio.h>

int main() 
{
	int a,b,c,p=0;  	
	
	printf("\nInput 1st integer: "); 
    scanf("%i", &a);
    
    printf("\nInput 2nd integer: "); 
    scanf("%i", &b);
    
    printf("\nInput 3rd integer: "); 
    scanf("%i", &c);
    
    if((a<(b+c))&&(b<(a+c))&&(c<(a+b)))
	{
		p=a+b+c;
		printf("\nPerimeter of triangle: %d", p);	
	}
    else
    {
		printf("\nPerimeter of triangle ain't possible");	
	}
	
	return 0;
}
