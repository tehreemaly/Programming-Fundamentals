#include<stdio.h>
int OBmarks(int maths,int eng,int comp,int sci,int urdu)
{	return maths+eng+comp+sci+urdu;
}
float Per(int marks)
{	return ((float)marks/500.0)*100.0;
}
void grade(float percent)
{
if(percent >=90 && percent ==100)
{printf("A");}
if(percent >=80 && percent <89)
{printf("B");}
if(percent >=70 && percent <79)
{printf("C");}
if(percent >=60 && percent <69)
{printf("D");}
if(percent <60)
{printf("F");}
return;
}


int main (void)
{
int maths,eng,comp,sci,urdu,marks;
float percent;
printf("enter maths");
scanf("%d", &maths);
printf("enter eng");
scanf("%d", &eng);
printf("enter sci");
scanf("%d", &sci);
printf("enter comp");
scanf("%d", &comp);
printf("enter urdu");
scanf("%d", &urdu);
marks=OBmarks(maths,eng,comp,sci,urdu);
printf("your ob is %d\n",marks);
percent=Per(marks);
printf("you percent is %f\n",percent);
grade(percent);
return 0;
}
