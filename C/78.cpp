//Write a C program to demonstrates the difference between predecrementing and postdecrementing using the decrement operator

#include<stdio.h>

int main()
{
    int x = 10;
    
    printf("Predecrementing:\n");
    printf("x   = %d\n", x);
    printf("x-- = %d\n", x--);
    printf("x   = %d\n\n", x);
    
    x = 10;
    printf("Postdecrementing:\n");
    printf("  x = %d\n", x);
    printf("--x = %d\n", --x);
    printf("  x = %d\n", x);
    
    return 0;
}
