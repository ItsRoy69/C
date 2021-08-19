//Write a C program that accepts a pair of numbers from the user and prints "Ascending order" if the two numbers are in ascending order, otherwise prints, "Descending order".

#include <stdio.h>

int main () 
{
    int x,y,z,p;
    float sum=0;

    printf("Input two pairs values:\n");
    scanf("%d %d", &x,&y);

    if(x>y)
    {
        printf("Descending order\n");
    }
    else
    {
        printf("Ascending order");
    }
}