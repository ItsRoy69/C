//Write a C program that reads five subject marks (0-100) of a student and calculate the average of these marks.

#include <stdio.h>

int main() 
{
	
	int marks[5], m, i, a=0, total=0;
	float f;
	
	printf("Input five subject marks(0-100): \n");

	for(i = 0; i<5; i++) 
	{
		scanf("%d", &marks[i]);
		if(marks[i] <= 0) 
        {
		    break;
		}
		a++;
		total += marks[i];
	}
	f = (float)total/(float)a;
	
	printf("Average marks : %.2f\n", f);
	return 0;
	
}