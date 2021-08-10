//Write a C program to check whether two numbers in a pair is in ascending order or descending order.

#include <stdio.h> 

int main()  
{
  	int x,y,z,sum=0;
  	
  	printf("Input a pair of numbers (for example 10,2 : 2,10)\n");
  	
  	printf("Input first number of the pair: ");
     scanf("%i",&x);
    
 	printf("Input second number of the pair: ");
     scanf("%i",&y);
    
    if(x<y)
    {
		printf("The pair is in ascending order!");
	}
    else
    {
		printf("The pair is in descending order!");
	}
	return 0;
}
    
