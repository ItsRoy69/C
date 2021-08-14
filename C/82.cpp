//Write a C program that reads in a five-digit integer and determines whether or not it’s a palindrome.

#include <stdio.h>

int main() 
{
  int n, rev = 0, rem, o;

    printf("Enter an integer: ");
    scanf("%d", &n);
    o = n;

    
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (o == rev)
        printf("%d is a palindrome.", o);
    else
        printf("%d is not a palindrome.", o);

    return 0;
}