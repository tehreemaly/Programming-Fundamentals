#include<stdio.h>
int main(void)
{
int i,j,k;
i=1;

do
{	j=5;
	k=1;

do
{printf(" ");

j--;
}while(j>=i);

do
{printf("*");

k++;
}while(k<=i);

i++;

printf("\n");
}while(i<=5);
return 0;
}

