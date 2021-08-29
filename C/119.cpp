//Write a C program to calculate the sum all numbers between two given numbers (inclusive) not divisible by 7.

#include <stdio.h>

int main () 
{

    int a, b, sum = 0, i, temp = 0;

    printf("Input two numbers(integer):\n");
    scanf("%d %d", &a, &b);

    if (b < a)
    {
        temp = a;
        a = b;
        b = temp;
    }

    for (i = a; i <= b; i++)
    {
        if (i % 7 != 0)
        {
            sum += i;
        }
    }
    printf("Sum of all numbers between said numbers (inclusive) not divisible by 7:\n");
    printf("%d\n", sum);
}
