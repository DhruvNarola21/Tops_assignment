#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3];
	
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the elements for matrix A:");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the elements for matrix B:");
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nMatrix A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	printf("Matrix C\n");

	

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];

		
		}
	
	}for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",c[i][j]);

		
		}
		printf("\n");
	
	}


	
	return 0;
	
	
}
