//Write a C program to remove any negative sign in front of a number.

#include<stdio.h>

int main()
{
    int x, y;

    printf("Input a value (negative): \n");
    scanf("%d", &x);

    if(x<0)
    {
        y=-(x);
    }

    printf("Original value = %d", x);
    printf("\nAbsolute value = %d", y);

    return 0;
}


