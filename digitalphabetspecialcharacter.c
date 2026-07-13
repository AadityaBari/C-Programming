//write a program to check weather a alphabet ,digit,and special character 
#include<stdio.h>
void main ()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z' ))
	{
		printf("character is alphabet");
		
	}
	else
	{
		if(ch>='0'&& ch<='9')
		{
			printf("character is number");
			
		}
		else 
		{
			printf("charcter is special charcter");
			
		}
	}
}
