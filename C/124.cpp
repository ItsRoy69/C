//Write a C program that reads an array of integers (length 7), replace every negative or null element by 1 and print the array elements.

#include <stdio.h>

int main ()
{
    int array[7], i, n;

    printf("Input 7 array elements:\n");
    for (i = 0; i < 7; i++)
    {

        scanf("%d", &n);
        array[i] = n;

    }
    printf("\nArray elements:\n");
    for (i = 0; i < 7; i++)
    {

        if (array[i] <= 0)
        {

            array[i] = 1;

        }    
        printf("array[%d] = %d\n", i, array[i]);
    }
}
