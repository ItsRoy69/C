//Write a C program that accepts two integers from the user and calculate the sum of the two integers.
#include <stdio.h> 
 int main()  
  {
     int x,y,sum;
     
     printf("Input the first integer: ");
     scanf("%i",&x);
     
     printf("Input the second integer: ");
     scanf("%i",&y);
     
     sum=x+y;
    
     printf("Sum of the above two integers = %i \n",sum);
     
     return(0); 
  }
