#include <stdio.h>
int drink, quantity;
int checkAvailabilityDrink( int cokep,int coke);
int calculateBillDrink(int cokep);
int UserInput(void);
int checkAvailablitiy(int cokep,int coke,int pepsip,int pepsi,int spritep,int sprite,int up7p,int up7);
int calculateUpdateStock(int coke, int pepsi,int sprite, int up7);
int TotalBill(int b, int a);

int main (void)
{
	int coke=10, pepsi=15, sprite=15, up7=25;
	int cokep=5,pepsip=7, spritep=7, up7p=3;
	int price;
	printf("Welcome to the vending machine\n");
	printf("Available Drinks:\n1. Coke (Price: $5, Available: 10) \n2. Pepsi (Price: $7, Available: 15)\n3. Sprite (Price: $7, Available: 15)\n4. 7UP (Price: $3, Available: 25)\n" );
	UserInput();
	checkAvailablitiy(cokep,coke,pepsip,pepsi,spritep,sprite,up7p,up7);
	calculateUpdateStock(coke, pepsi,sprite, up7);
	
	price=TotalBill(quantity,pepsip);
	printf("your bill  is %d",price);
	return 0;
}
int UserInput(void)
{
	printf("Enter the drink number you want to purchase(1-4):  ");
	scanf("%d",&drink);
	printf("Enter the drink quantity you want:  ");
	scanf("%d",&quantity);
	
	return 0;
}
int checkAvailablitiy(int cokep, int coke,int pepsip,int pepsi,int spritep,int sprite,int up7p,int up7)
{	if (drink==1)
	{
		checkAvailabilityDrink(cokep,coke);
	}
	
	else if (drink==2)
	{
		checkAvailabilityDrink(pepsip,pepsi);
		
	}
	else if (drink==3)
	{
		checkAvailabilityDrink(spritep,sprite);
		
	}
	else
	{
		checkAvailabilityDrink(up7p,up7);
		
	}
	return 0;
	
}
int checkAvailabilityDrink(int cokep, int coke)
{	int bill=calculateBillDrink(cokep);
	

	if (quantity>coke)
	{	
		
		printf("the available quantity has been ordered \n");
		
	}
	else 
	{	
		printf("You have ordered %d for a total of $%d.\n",quantity,bill);
	}
	return 0;
}
int calculateBillDrink(int cokep)
{	
	return quantity*cokep;
}
int calculateUpdateStock(int coke, int pepsi,int sprite, int up7)
{	
	if(drink==1)
	{	printf("Available Drinks:\n");
		
		printf("1. Coke (Price: $5, Available: %d) \n",coke-quantity);
	
		printf("2. Pepsi (Price: $7, Available: %d) \n",pepsi);
		
		printf("Sprite (Price: $7, Available: %d) \n",sprite);
		
		printf("4. 7UP (Price: $3, Available: %d) \n",up7);
	}
	else if(drink==2)
	{	printf("Available Drinks:\n");
		
		printf("1. Coke (Price: $5, Available: %d) \n",coke);
	
		printf("2. Pepsi (Price: $7, Available: %d) \n",pepsi-quantity);
		
		printf("Sprite (Price: $7, Available: %d) \n",sprite);
		
		printf("4. 7UP (Price: $3, Available: %d) \n",up7);
	}
	else if(drink==3)
	{	printf("Available Drinks:\n");
		
		printf("1. Coke (Price: $5, Available: %d) \n",coke);
	
		printf("2. Pepsi (Price: $7, Available: %d) \n",pepsi);
		
		printf("Sprite (Price: $7, Available: %d) \n",sprite-quantity);
		
		printf("4. 7UP (Price: $3, Available: %d) \n",up7);
	}
	else
	{	printf("Available Drinks:\n");
		
		printf("1. Coke (Price: $5, Available: %d) \n",coke);
	
		printf("2. Pepsi (Price: $7, Available: %d) \n",pepsi);
		
		printf("Sprite (Price: $7, Available: %d) \n",sprite);
		
		printf("4. 7UP (Price: $3, Available: %d) \n",up7-quantity);
	}
	
}
int TotalBill(int b, int a)
{	return b*a;
}
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	







