//Write a C program that read 5 numbers and sum of all odd values between them.

#include <stdio.h>

int main() 
{
	int a[5],j,sum=0;  	
	
	printf("\nInput 1st integer: "); 
    scanf("%i", &a[0]);
    
    printf("\nInput 2nd integer: "); 
    scanf("%i", &a[1]);
    
    printf("\nInput 3rd integer: "); 
    scanf("%i", &a[2]);
    
    printf("\nInput 4th integer: "); 
    scanf("%i", &a[3]);
    
    printf("\nInput 5th integer: "); 
    scanf("%i", &a[4]);
    
    for(j = 0; j < 5; j++) 
	{
		if((a[j]%2) != 0) 
		{
		   sum += a[j];
		}	
    }
	printf("\nSum of all odd values: %d", sum);
	return 0;
}
