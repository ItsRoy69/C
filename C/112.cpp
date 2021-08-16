//Write a C program that reads seven integer values from the user and find the highest value and it’s position.

#include <stdio.h> 

 int main()  
{
     int x[6],y,z,max=0,num_pos=0;
     
    printf("Input 6 integers : \n");
    for(y=0;y<6;y++)
    {
            scanf("%d",&x[y]);
	 }	
	for(z = 0; z < 6; z++) 
	{
	 	if(x[z] > max) 
		{
			max = x[z];
			num_pos = z;
		}
	 }
	 printf("Highest value: %d\nPosition: %d\n", max, num_pos+1);
	 return 0;
}
     