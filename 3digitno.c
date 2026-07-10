// to check wheater a number is 3 digit
#include <stdio.h>
void main()
{
  int num;
  	printf("enter a number");
  	scanf("%d",&num);
  	if(num>99 && num<1000)
  	{
  		printf("num is 3 digit number");
	  }
	  else
	  {
	  	printf("num is not 3 digit number");
	  }
}
