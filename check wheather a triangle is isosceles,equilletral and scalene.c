//write a program  to check wheather a triangle is isosceles,equilletral and scalene
#include<stdio.h>
void main ()
{
	float a,b,c ;
	printf("Enter the value of a,b and c ");
	scanf("%f%f%f",&a,&b,&c);
	if (a==b && b==c && c==a)
	{
		printf("equillateral triangle ");
		
	}
	else if (a==b && b!=c)
	 
		    
		{
			printf(" isocales triangle");
		}
		else if(a!=b && b==c)
		{
		printf("issoscales triangle");
		}
		else if(a==c && c!=b)
		{
			printf("triangle is isoscales triangle");
		}
		else if(a!=b!=c)
		{
			printf("triangle is scalen triangle");
		}
			
		
	
}
