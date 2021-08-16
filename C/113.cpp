//Write a C program to create and print the sequence of the following example.

// a=1      b=100
// a=6      b=90
// a=11     b=80
// a=16     b=70
// a=21     b=60
// a=26     b=50
// a=31     b=40
// a=36     b=30
// a=41     b=20
// a=46     b=10
// a=51     b=0


#include <stdio.h>

int main ()
{
    int a, b;

    for (a = 1, b = 100; a <= 37, b >= 0; a += 5, b -= 10)
    printf("a=%d \t b=%d\n", a, b);
}
