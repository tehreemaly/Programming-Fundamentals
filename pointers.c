#include<stdio.h>
int main(){
int age=25;
int *ptr=&age;
printf("enter age %d\n",age);
printf("enter age %d\n",*ptr);
printf("enter age %p\n", &age);
printf("enter age %p\n",ptr);
printf("enter age %p\n", &ptr);
return 0;
}
