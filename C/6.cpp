//Write a C program to compute the circumference and area of a circle with a given radius.
#include <stdio.h> 
 int main()  
  {
     float r,area,circumference;
     
     printf("Radius of a circle in inches = ");
     scanf("%f",&r);
     
     circumference=2*3.14*r;
     area=3.14*r*r;
    
     printf("circumference of the circle = %f inches\n",circumference);
     printf("Area of the circle = %f inches\n",area);
     return(0); 
  }
