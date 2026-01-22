#include<stdio.h>
int senior(int age, int money)
{ 
	if(age>50)
	{return (money/100)*30;
}
else {
return 0;
}

}
int students(int student, int money)
{ if (student=='Y')
	{return (money/100)*40;
}
else
{return 0;
}
}
int memberShip(int membership, int money )
{
if(membership>=12)
{ return (money/100)*15;
}
else
{return 0;}
}

int training(int sessions,int money)
{ if (sessions>5)
{return (sessions*((money/100)*20));
}
else
{return 0;}
}

int main (void)
{
int age,membership,sessions,money,dissenior,disstud,dismem,distrain,Discount,totaldiscount;
char student;
printf("enter money");
scanf("%d",&money);
printf("enter age");
scanf("%d",&age);
printf("enter membership");
scanf("%d",&membership);
printf("enter sessions");
scanf("%d",&sessions);

printf("enter student");
scanf(" %c",&student);

dissenior=senior( age, money);
printf("%d\n",dissenior);
disstud=students(student,money);
printf("%d\n",disstud);
dismem=memberShip(membership,money);
printf("%d\n",dismem);
distrain=training(sessions,money);
printf("%d\n",distrain);
Discount=dissenior+disstud+dismem+distrain;
totaldiscount=Discount-money;
printf("%d",totaldiscount );
return 0;

}






















