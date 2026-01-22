#include <stdio.h>
int main (void)
{
	char operator;
	int a,b;
	printf("enter an operator(+,-,/,*)\n");
	scanf(" %c", &operator);
	
	printf("enter an 1st number");
	scanf("%d", &a);
	
	printf("enter an 2nd number");
	scanf("%d", &b);
	
	if (operator== '-')
	{
		printf("diff %d and %d is %d",a,b,a-b);
	}
	else if (operator== '+')
	{
		printf("sum %d and %d is %d",a,b,a+b);
	}
	else if (operator== '/')
	{
		printf("division %d and %d is %d",a,b,a/b);
	}
	else 
	{
		printf("prodcut %d and %d is %d",a,b,a*b);
	}
	return 0;


}
