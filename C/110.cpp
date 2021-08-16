//Write a C program to find the odd, even, positive and negative number form a given number(integer) and print a message 'Number is positive odd' or 'Number is negative odd' or 'Number is positive even' or 'Number is negative even'. If the number is 0 print “Zero”. 

#include <stdio.h>

int main () 
{

    int i, b;

    printf("Input a number (integer):\n");
    scanf("%d", &b);

    if ((b % 2 == 0) && b > 0)
    {
        printf("Number is positive-even\n");
    }
    else
    {

        if ((b % 2 == 0) && b < 0)
        {
        printf("Number is negative-even'\n");
        }
        else
        {

            if ((b % 2 !=0) && b > 0)
            {
                printf("Number is positive-odd\n");

            }
            else
            {
                if ((b % 2 != 0) && b < 0)
                {
                    printf("Number is negative-odd\n");

                }
                else
                {
                    printf("Zero\n");    
                }
            }
        }
    }
}
