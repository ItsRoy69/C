//Write a C program that accepts principal amount, rate of interest and days for a loan and calculate the simple interest for the loan, using the following formula.

#include<stdio.h>

int main()
{
    int p,r,t,i;

    printf("Input principle, Rate of interest & days for a loan to find simple interest: \n");
    scanf("%d%d%d",&p,&r,&t);

    i=(p*r*t)/365;

    printf("Principal Amount = %d\n",p);
    printf("Rate of Interest = %d\n",r);
    printf("Days for a loan = %d\n",t);
    printf("Simple interest = %d\n",i);

    return 0;
}

