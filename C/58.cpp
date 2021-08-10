//Write a C program that accepts 4 real numbers from the keyboard and print out the difference of the maximum and minimum values of these four numbers.

#include <stdio.h>

int main()
{
    double a,b,c,d,max,min;
    
    printf("\nInput four numbers: \n"); 
    scanf("%lf\n %lf\n %lf\n %lf", &a, &b, &c, &d);
    
    if (a >= b && a >= c && a >= d)
      max = a;
    else if (b >= a && b >= c && b >= d)
      max = b;
    else if (c >= a && c >= b && c >= d)
      max = c;
    else
      max = d;
      
    if (a <= b && a <= c && a <= d)
      min = a;
    else if (b <= a && b <= c && b <= d)
      min = b;
    else if (c <= a && c <= b && c <= d)
      min = c;
    else
      min = d;
      
      
    printf("\nDifference is: %lf", max-min);
	
    return 0;
}

