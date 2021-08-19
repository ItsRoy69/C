//Write a C program that read two integers and dividing the first number by second, print the result of this division with two digits after the decimal point and print "Division not possible..!" if the division is not possible.

#include <stdio.h>

int main () 
{
    int x,y;
    float r=0;

    printf("Input two integer values:\n");
    scanf("%d %d", &x,&y);

    r=(x*1.0)/y;
    printf("Result: %.2f",r);
}
