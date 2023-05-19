#include<stdio.h>
int main()
{
	char str[20],length=0,i;
	
	printf("Enter String:");
	scanf("%s", str);
	
//	printf("%s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("Legth is :%d",length);
	
	
	return 0;
	
	
}
