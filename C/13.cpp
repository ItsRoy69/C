//Write a C program that accepts three integers and find the maximum of three.

#include <stdio.h> 
 int main()  
  {
     int x,y,z,product;
     
     printf("Input the first integer: ");
     scanf("%i",&x);
     
     printf("Input the second integer: ");
     scanf("%i",&y);
     
     printf("Input the third integer: ");
     scanf("%i",&z);
     
     if (x > y && x > z)
        printf("X as %i is the largest number.", x);

     if (y > x && y > z)
        printf("Y as %i is the largest number.", y);
            
     if (z > x && z > y)
        printf("Z as %i is the largest number.", z);
     
     return(0); 
  }
