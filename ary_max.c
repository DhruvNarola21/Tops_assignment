#include<stdio.h>
int main()
{
	int i,a[i],max;
	
	for(i=0;i<5;i++)
	{
		printf("Enter Element:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}

	max=a[0];
	
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Maximum out of there is: %d ",max);
		
	return 0;
}
