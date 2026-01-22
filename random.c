#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int randomno()
{
    //string
    srand(time(NULL));
    return rand()%6;
}
int main (){
int a;
printf("Enter any number: ");
scanf("%x", &a);
printf("%d",rand()%a);
return 0;
}
