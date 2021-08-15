//Write a C program which reads an integer (7 digits or fewer) and count number of 3s in the given number.

#include<stdio.h>

int main()
{
    int num,ctr = 0,remainder;  

    printf( "Input a number: " );
    scanf("%d", &num);   
     
    while(num > 0) 
    {
        remainder = num % 10;
        num /= 10;
        
        if(remainder == 3)
            ctr++;
    }
    printf("The number of threes in the said number is %d\n",ctr);
    return 0;
}

