#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int randomno1(int s)
{
	sleep(1);
	srand(time(NULL));
	return rand()%s+5;
}


int main(void) {
int s,square;
printf("Enter the size of array(n): ");
scanf("%d", &s);
int arr[s];
arr[0]=randomno1(s);

for(int i=0,j=1;i<s;i++,j++)
{
arr[j]=arr[i]*arr[i];

}

for(int a=0,j=0;a<s;a++,j++)
printf("index%d : %d\n",a,arr[j]);

    return 0;
}

