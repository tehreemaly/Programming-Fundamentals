#include <stdio.h>

int main(void) {
  int age;
    
    printf("enter age\n");
	scanf("%d", &age);
   
   	
	if (age<13)
	{
	     printf("child");
	        }
	        else if (age<20)
	        { printf("teenager");
	        
	        }
	         else if (age<=64)
	        { printf("adult");
	        
	        }
	        else if(age>64)
	        { printf("senior");}
	
	
	return 0;
	
	}
	
	
