//Write a C program that reads an array of integers (length 7), and replace the first element of the array by a give number and replace each subsequent position of the array by the double value of the previous. 

#include <stdio.h>

int main ()
{
    int array[7], i, n,j;

    printf("Input the first element of the array:\n");
    scanf("%d", &n);
    
    printf("\nArray elements:\n");
    for (i = 0, j = n; i < 7; j*= 2, i++)
    {
        array[i] = j;
    } 
    for (j = 0; j < 7; j++)
    {   
        printf("array[%d] = %d\n", j, array[j]);
    }
}
