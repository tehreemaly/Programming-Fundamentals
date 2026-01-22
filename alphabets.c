#include <stdio.h>
int main (void)
{	
	char alpha;
	printf("enter alphabet\n");
	scanf("%c", &alpha);
	
	if ((alpha>='a' && alpha<= 'z') || (alpha>='A' && alpha<= 'Z')) 
	{
	if (alpha== 'a' || alpha== 'e'||alpha== 'i'||alpha== 'o'||alpha== 'u' || alpha== 'A' || alpha== 'E'||alpha== 'I'||alpha== 'O'||alpha== 'U')
	{
		printf("the alphabet is vowel");
	}
	else  
	{	printf("the alphabet is consonant"); }
	
	}
	
	else  
	{	printf("INVALID ");
	}
	
	
	
	return 0;
}
