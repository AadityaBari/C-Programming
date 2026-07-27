//comparing three digit no. with nested if-else
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("A is greater");
		}
		else
		{
			printf("C is greater");
		}
	}
	else
	{
		if(b>c)
		{
			printf("B is greater");
		}
		else
		{
			printf("C is greater");
		}
	}		
}
	
