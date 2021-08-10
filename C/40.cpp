// Write a C program to find all numbers which are dividing by 7 and the remainder is equal to 2 or 3 between two given integer numbers.

#include <stdio.h> 

int main()  
{
  	int z,x,y;
  	  	
  	printf("Input first number: ");
     scanf("%i",&x);
    
    printf("Input second number: ");
     scanf("%i",&y);
     
    printf("Expected Output: \n" ); 
    for(z=x;z<y;z++)
	{
		 if((z%7)==2 || (z%7)==3)
	     
	     printf("%d \n",z);
	}
	
   	return 0;
}

