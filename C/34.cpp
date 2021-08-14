//Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.

#include <stdio.h> 

int main()  
{
  	int x,y,z,sum=0;
  	
  	printf("Input first number of the pair: ");
    scanf("%i",&x);
    
    printf("Input second number of the pair: ");
    scanf("%i",&y);
    
    printf("\nList of odd numbers:");
    
    for(z=y;z<=x;z++)
    {
    	
    	if ((z%2)!= 0)
     	{
     		printf("\n%d ",z);	
     		sum+=z;
		}
 	}
	printf("\nSum= %d ", sum);
	return 0;
}
