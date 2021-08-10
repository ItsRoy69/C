//Write a C program to read the coordinates(x, y) (in Cartesian system) and find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).

//(Note: A Cartesian coordinate system is a coordinate system that specifies each point uniquely in a plane by a pair of numerical coordinates.
//These are often numbered from 1st to 4th and denoted by Roman numerals: I (where the signs of the (x,y) coordinates are I(+,+), II (-,+), III (-,-), and IV (+,-).)



#include <stdio.h> 

int main()  
{
  	int x,y,z,sum=0;
  	
  	printf("Input first number of the coordinates: ");
     scanf("%i",&x);
    
    printf("Input second number of the coordinates: ");
     scanf("%i",&y);
     
    if((x>0)&&(y>0))
	{
	 	printf("Quadrant-I(+,+)");		
	}
	else if((x<0)&&(y>0))
    {
	 	printf("Quadrant-II(-,+)");		
	}
	else if((x<0)&&(y<0))
    {
	 	printf("Quadrant-III(-,-)");		
	}
	else if((x>0)&&(y<0))
	{
	 	printf("Quadrant-IV(+,-)");		
	}
	return 0;
}



