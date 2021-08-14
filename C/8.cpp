//Write a C program to convert specified days into years and weeks.
#include <stdio.h> 
 int main()  
  {
     int days,years, weeks;
     
     printf("Number of days : ");
     scanf("%i",&days);
     
     years=days/365;
     weeks=days/7;
    
     printf("Years: %i\n",years);
     printf("Weeks: %i\n",weeks);
     return(0); 
  }
