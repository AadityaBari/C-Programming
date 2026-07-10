// write a program to with the help of function with  argument and no return value 
#include<stdio.h>
float add();
float add ()
{
    float a,b ,sum ;
	printf (" Enter the value of a and b ");
	scanf("%f%f",&a,&b);
	sum = a+b;
    return sum;
	
}
void main()
{
    float res;
    res=add();
	printf("sum=%f",res);
} 
