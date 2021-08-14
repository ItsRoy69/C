//Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.

#include <stdio.h> 
 int main()  
  {
     float hr,y,salary;
     int x;
     
     printf("Input the Employees ID: ");
     scanf("%d",&x);
     
     printf("Input the working hrs: ");
     scanf("%f",&hr); 
     
     printf("Salary amount/hr: ");
     scanf("%f",&y);
          
     salary=hr*y;
     
    
     printf("Employees ID: %d \n", x);
     printf("Salary : U$ %f", salary);
     
     
     return(0); 
  }
  
  
