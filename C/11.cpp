//Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.

#include <stdio.h> 
 int main()  
  {
     double x,y,n1,n2,average;
     
     printf("Input the first weight: ");
     scanf("%lf",&x);
     
     printf("Total number of the first weight: ");
     scanf("%lf",&n1); 
     
     printf("Input the second weight: ");
     scanf("%lf",&y);
     
     printf("Total number of the second weight: ");
     scanf("%lf",&n2); 
     
     average=((x*n1)+(y*n2))/(n1+n2);
     
    
     printf("Average = %lf \n", average);
     
     
     return(0); 
  }
  
  
