#include<stdio.h>
float CalculateBill(float a, float b)
{	
return a*b;
}
int main (void)
{	int coffee;
float quantity,expresso,latte,cappuccino,mocha,americano, bill;
printf("Here is the menu:\n1. Espresso - $2.50\n2. Latte $3.00\n3. Cappuccino $3.50\n4. Mocha $4.00 \n5. Americano - $2.25\n choose from (1-5)");
scanf("%d",&coffee);

printf("Enter the quantity coffee: \n");
scanf("%f", &quantity);

expresso=2.5;
latte=3;
cappuccino=3.5;
mocha=4;
americano=2.25;

	switch(coffee)
{	case 1:
	
	{printf("you have selected %f expresso. that will be $%.2f,please\n",quantity,CalculateBill(quantity,expresso));
	break;  }
	case 2:
	{printf("you have selected %f latte. that will be $%.2f,please\n",quantity,CalculateBill(quantity,latte));
	break;  }
	case 3:
	{printf("you have selected %f cappucinno. that will be $%.2f,please\n",quantity,CalculateBill(quantity,cappuccino));
	break;  }
	case 4:
	{printf("you have selected %f mocha. that will be $%.2f,please\n",quantity,CalculateBill(quantity,mocha));
	break; } 
	default:
	{printf("you have selected %f americano. that will be $%.2f,please\n",quantity,CalculateBill(quantity,americano)); 
	}
	
}

printf("Enjoy your coffee\n");



return 0;
}
