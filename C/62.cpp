//Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number. 


#include <stdio.h> 
#include <math.h>
  int main() 
  {
    int x=0,y;
    
    printf("Input value of x:");
    scanf("%d", & y);
    
    if (y < 500) 
    {
     	x += y % 10;
	    y /= 10;
	    x += y % 10;
	    y /= 10;
	    x += y % 10;
    }
    printf("Sum of the digits is %d\n", x);
    
   return 0;
  }

