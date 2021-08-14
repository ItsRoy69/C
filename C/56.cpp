//Write a C program to shift given data by two bits to the left

#include<stdio.h>

int main()
{
	int a, b;
	
	printf("Read the integer from keyboard-");
	scanf("%d",&a);
	
	printf("\nInteger value = %d ",a);
	
	a<<=2;
	b=a;
	
	printf("\nThe left shifted data is = %d ",b);
	
	return 0;
}

