#include<stdio.h>
int main(){
struct person{
char name[30];
int age;

};
struct person people[3]={

{"alice", 18},
{"bob" , 20}
};
FILE *fptr;

fptr= fopen("names.txt","w");
for(int i=0;i<2;i++){
fprintf(fptr," %s %d\n",people[i].name,people[i].age);}
fclose(fptr);
FILE *fpt;

fpt= fopen("names.txt","r");
struct person read;
int h;
while((fscanf(fpt, "%s %d",read.name,&read.age))!=EOF)
{
printf("%s %d\n",read.name,read.age);
}

fclose(fpt);



return 0;
}
