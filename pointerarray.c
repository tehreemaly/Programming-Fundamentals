#include<stdio.h>

int main(){
int arr[]={1,2,3,4,5};
int *ptr=arr;
for(int i=0;i<5;i++)
{
printf("%d \n",*ptr);
ptr++;
}


/*
printf("enter age %d\n",a);
printf("enter age %d\n",b);
*/
return 0;
}
