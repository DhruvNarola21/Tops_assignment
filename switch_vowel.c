#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter The Alphabet You want to check?");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is Vowel",ch);
			break;
		
		default:
			printf("%c is Consonant",ch);
	}
	return 0;
}
