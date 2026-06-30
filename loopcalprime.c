////to cal the prime of a given no.
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
	    if(n%i==0)
	    count++;
    }
	 if(count==0)
	 {
	 	printf("Prime number");
	 }
	 else
	 {
	 	printf("Not a prime number");
	 }
}
