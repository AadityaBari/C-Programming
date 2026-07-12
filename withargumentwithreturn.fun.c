// write a program to with the help of function with   argument and with return value 
#include<stdio.h>
float add(float,float);
float add (float a ,float b)
{
	
    return a + b;
	
}
void main()
{
    float a , b , sum ,res;
    
	printf("Enter the value of a and b");
	scanf("%f%f" ,&a,&b);
	printf(" sum = %f ",add(a,b));
} 
