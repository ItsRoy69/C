//Write a C program that accepts a pair of numbers from the user and print the sequence from the lowest to highest number. Also, print the average value of the sequence.

#include <stdio.h>

int main () 
{
    int x,y,z,p;
    float sum=0;

    printf("Input two pairs values:\n");
    scanf("%d %d", &x,&y);

    printf("Sequence from the lowest to highest number: ");
    for(p=0,z=x;z<=y;z++)
    {
        sum+=z;
        printf("%d ", z);
        p++;
        
    }
    printf("\nAverage value of the said sequence: %.2f",sum/p);

}