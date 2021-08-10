//Write a C program to calculate the sum of all number not divisible by 17 between two given integer numbers.

#include <stdio.h> 

int main()  
{
  	int a,x,y,z=0;
  	  	
  	printf("Input first number: ");
     scanf("%i",&x);
    
    printf("Input second number: ");
     scanf("%i",&y);
     
    for(a=x;a<=y;a++)
	{
		 if((a%17)!=0)
	    {
	       z=z+a;
		   
		}
	
	}
	printf("Expected Output: %d",z ); 
   	return 0;
}

