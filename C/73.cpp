//Write a C program that reads in two integers and check whether the first integer is a multiple of the second integer.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Input the first integer: ");
    scanf("%d", &x);

    printf("Input the second integer: ");
    scanf("%d", &y);

    if(x%y==0)
    {
        printf("%d is a multiple of %d", x,y);
    }       
    else
    {
         printf("%d is not a multiple of %d", x,y);
    }
    
    return 0;
}
        