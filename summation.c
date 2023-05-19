#include<stdio.h>
int main()
{
	int sum=0,i,a[i];
	
	for(i=0;i<5;i++)
	{
		printf("Enter Element:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
		sum=sum+a[i];
	}
	printf("Summation Is:%d",sum);
	
	return 0;
	
}
