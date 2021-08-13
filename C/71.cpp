//Write a C program to copy a given string into another and count the number of characters copied.

#include<stdio.h>
#define N 10

int main()
{
    char str1[80], str2[80];
    int i;

    printf("Input a string :");
    scanf("%s", str2);

    for(i=0; str2[i]!='\0'; i++)
    {
        str1[i]=str2[i];
        str1[i]='\0';
    }

    printf("\n");
    printf("\nNumber of characters = %d\n", i);

    return 0;
}
