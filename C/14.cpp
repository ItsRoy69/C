//Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters)


#include <stdio.h> 
 int main()  
  {
     int x,y,average  ;
         
     printf("Input total distance in km: ");
     scanf("%d",&x);
     
     printf("Input total fuel spent in litres: ");
     scanf("%d",&y); 
     
     average=(x/y);
     
    
     printf("Average = %i km/lt \n", average);
          
     
     return(0); 
  }
  
  
