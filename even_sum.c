#include<stdio.h>
int main()
{
	int i,no,sum;
	
	printf("Enter Number:");
	scanf("%d",&no);
	
	for(i=2;i<=no;i=i+2)
	{
		printf("%d\n",i);
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
		
		
 }
