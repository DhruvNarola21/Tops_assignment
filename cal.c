#include<stdio.h>
int main()
{
	int a,b;
	char op;
	
	printf("Please enter Arrithmeatic operator(+,-,*,/,Mod):");
	scanf("%c",&op);
	
	printf("Enter A:");
	scanf("%d",&a);
	
	printf("Enter B:");
	scanf("%d",&b);
	
	switch(op)
	{
		case '+':
			printf("Addition of two number is:%d",a+b);
			break;
		case '-':
			printf("substraction of two number is:%d",a-b);
			break;
		case '*':
			printf("Multiplication of two number is:%d",a*b);
			break;
		case '/':
			printf("division of two number is:%d",a/b);
			break;
		case '%':
			printf("Module of two number is:%d",a%b);
			break;
		default:
			printf("Please enter valid operator");
	}
	
}
