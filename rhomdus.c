#include<stdio.h>
int main (void)
{
int i,j,k;
for (i=5;i>=1;i--)
{for(j=1;j<=5-i;j++)
{printf(" ");}
for(k=1;k<=5;k++)
{printf("%d",i);}
printf("\n");



}

return 0;













}

/*
55555
 4444
  333
   22
    1
    5
   44
  333
 2222
11111
*/
