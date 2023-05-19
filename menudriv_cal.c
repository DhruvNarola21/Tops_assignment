#include<stdio.h>
int main()
{
	int a,b,n;
	
	printf("1.add\n2.substarction\n3.Multiplication\n4.Divison\n5.Module\n");
	
	printf("Please Enter Task Number which you want to perform:");
	scanf("%d",&n);
	
	printf("Enter A:");
	scanf("%d",&a);
	
	printf("Enter B:");
	scanf("%d",&b);
	
	switch(n)
	{
		case 1:
			printf("Addition of two number is:%d",a+b);
			break;
		case 2:
			printf("substraction of two number is:%d",a-b);
			break;
		case 3:
			printf("Multiplication of two number is:%d",a*b);
			break;
		case 4:
			printf("division of two number is:%d",a/b);
			break;
		case 5:
			printf("Module of two number is:%d",a%b);
			break;
		default:
			printf("Please enter valid operator");
	}
	
}
