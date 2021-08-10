//Write a program that reads two numbers and divide the first number by second number. If the division not possible print "Division not possible". 

#include <stdio.h> 

int main()  
{
  	int x,y;
  	float z=0;
  	
  	printf("Input first number: ");
     scanf("%i",&x);
    
    printf("Input second number: ");
     scanf("%i",&y);
     
    if(x%y==0)
    {
       z=(x/y);
	   printf("Expected Output: %.1f",z );
	}
	else
	{
		printf("Division not possible" );
	}
	return 0;
}

