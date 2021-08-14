//Write a C program to read a password until it is correct. For wrong password print "Incorrect password" and for correct password print "Correct password" and quit the program. The correct password is 1234.

#include <stdio.h> 

int main()  
{
  	int x,y=1234;
  	
  	printf("Input the password: ");
     scanf("%i",&x);
     
    if(x==y)
    {
		printf("Correct password");
	}
    else
    {
		printf("Incorrect password");
	}
	return 0; 
  }
