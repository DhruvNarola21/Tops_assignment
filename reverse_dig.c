#include<stdio.h>
int main()
{
	int n,rev=0,rem;
	
	printf("Enter a number you want to reverse:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	
	printf("reverse number is : %d",rev);
	
	return 0;
}
