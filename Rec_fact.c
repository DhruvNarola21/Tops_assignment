#include<stdio.h>
int mul(int n);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Factorial is %d",mul(n));
    return 0;
}

int mul(int n) 
{
    if (n>=1)
        return n*mul(n-1);
    else
        return 1;
}
