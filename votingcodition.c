//write a program to to check ing voting eligible 
#include<stdio.h> 
void main ()
{
	int age;
	printf ("Enter the value of age ");
	scanf("%d",&age);
	if (age>=18)
	{
		printf("eligible for vote ");
		
	}
	else
	{
		printf("not eligible for vote");
		
	}
}
