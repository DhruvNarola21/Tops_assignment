#include<stdio.h>
int main()
{
	int a=20,b=10;
	
	printf("Before Swapping\n");
	
	printf("Value of A Is:%d\n",a);
	printf("Value of B Is:%d\n",b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	
	printf("After Swapping\n");
	
	printf("Value of A Is:%d\n",a);
	printf("Value of B Is:%d\n",b);
	
	
	
	return 0;
}
