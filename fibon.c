#include<stdio.h>
int main()
{
	int i,n,n1=0,n2,n3;
	
	printf("Enter N terms:");
	scanf("%d",&n);
	printf("%d\n",n1);
	for(i=1;i<=n;i++)
	{
		//printf("%d",n1);
		n1=n2;
		n2=n3;
		n3=n1+n2;
		
		printf("%d\n",n3);
	}
	
	return 0;
}
