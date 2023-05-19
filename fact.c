#include<stdio.h>
int main()
{
	int i,no,ans=1;
	
	printf("Enter Number:");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		printf("%d\n",i);
		ans=ans*i;
	}
	printf("Factorial is: %d",ans);

	return 0;
}
