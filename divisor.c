#include<stdio.h>
int divisor(int a, int b, int c)
{
	if (b%a==0 && b%a==0)
	{
		printf("%dis common divisor of %d and %d\n",a,b,c);
	}
	else 
	{
	printf("%d is not a common divisor of %d and %d\n",a,b,c);
	}
return 0;
}

int main (void)
{
	int a,b,c;

	printf("enter the 1st value");
	scanf("%d", &a);

	printf("enter the 2nd value");
	scanf("%d", &b);

	printf("enter the 3rd value");
	scanf("%d", &c);

divisor(a,b,c);
return 0;
}















