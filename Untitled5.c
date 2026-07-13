//swapping using with out using 3 variable 
#include<stdio.h>
void main (){
	int a,b;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("before swapping value of a =%d\n",a);
	printf("before swapping value of a =%d\n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping value of a =%d\n",a);
	printf("after swapping value of b =%d\n",b);
}

