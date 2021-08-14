//Write a C program to read and print the elements of an array of length 5, before print, put the triple of the previous position starting from the second position of the array.

#include<stdio.h>

int main()
{
	int n[5], i,x;
	
	printf("Input the first number of the array :");
	scanf("%d", &x);
	
	for(i=0;i<5;i++)
	{
		n[i]= x;
		x=x*3;
			
	}
	
	printf("Array values are: \n");
	for(i = 0; i < 5; i++) 
	{
		printf("n[%d] = %d\n", i, n[i]);
    }
	return 0;
}
	
