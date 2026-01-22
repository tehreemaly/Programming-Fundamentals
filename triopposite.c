#include <stdio.h>

int main() {
int r,s,c;
for(r=5;r>=0;r--)
{
for(s=1;s<=5-r;s++)
{
printf(" ");
}
for(c=1;c<=r*2;c++)
{
printf("%d",r);
}
printf("\n");
}

    return 0;
}

