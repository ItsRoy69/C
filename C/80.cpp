//Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints square using hash (#) character.

#include<stdio.h>

int main()
{
    int size, i, j;
    
    printf( "Input the size of the square: \n" );
    scanf( "%d", &size );
    
    if(size < 1 && size > 10) 
    {
        printf("Size should be in the range 1 to 10\n");
        return 0;
    }
    
     for(i=0; i<size; i++) 
     {
        for(j=0; j<size; j++) 
        {
            printf(" #");
        }
        printf("\n");
    }

    return 0;
}
