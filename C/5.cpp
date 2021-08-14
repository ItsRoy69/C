//Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches.
#include <stdio.h> 
 int main()  
  {
     int x=7,y=5,area,peri;
     
     peri=2*x+2*y;
     area=x*y;
    
     printf("Perimeter of the rectangle = %i inches\n",peri);
     printf("Area of the rectangle = %i inches\n",area);
     return(0); 
  }
