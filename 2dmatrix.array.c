// 2D array input and output
#include<stdio.h>
void main ()
{
	int r,c,i,j;
	printf("Enter the value of r and c");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("enter the  element of matrix\n");
	for (i=0;i<r;i++)// 1<2
	{
		for (j=0;j<c;j++)//1<2
		{
			scanf("%d",&a[i][j]);//&[1] [1]
		}
	}
	printf("dispaly the element of matrix \n");
	for (i=0;i<r;j++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
		
	}

}
