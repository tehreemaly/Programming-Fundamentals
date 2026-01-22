#include <stdio.h>

#include <time.h> //time();

#include <stdlib.h> //srand(), rand()

#include <string.h> //srand()

#include <ctype.h>  //for tolower()





int Randomize ();

void displayhangman(int lives);





int main()

{



    printf("********************************************\n");

    printf("*                                          *\n");

    printf("*          Welcome to Hangman Game!        *\n");

    printf("*                                          *\n");

    printf("********************************************\n\n");



    printf("Hangman is a classic word-guessing game. The computer will randomly\n");

    printf("select a word, and your task is to guess the letters in that word.\n");

    printf("You have a limited number of lives, so be careful with your guesses!\n");

    

    printf("\nRules:\n");

    printf("- You start with some lives which are displayed.\n");

    printf("- The computer will choose a random word.\n");

    printf("- Guess one letter at a time.\n");

    printf("- If you enter a word or a sentence the first letter will be considered as the guess\n");

    printf("- Correct guesses reveal the letters in the word.\n");

    printf("- Incorrect guesses cost a life.\n");

    printf("- Try to guess the entire word before running out of lives!\n\n");



    printf("Let's see if you can guess the word and avoid the hangman!\n\n");

    

    

	char start_end;

	while(1)

	{

		printf("Press E To Continue.....\n");

		printf("        OR              \n");          

		printf("Press Q To QUIT.........\n");

		printf("\n");

	

		scanf(" %c",&start_end);

		printf("\n");

		if (start_end=='E'||start_end=='e'||start_end=='Q'||start_end=='q')

		{

			break;

		

		} 

		

	}

	

	

	

	if (start_end == 'Q' || start_end == 'q')

	{



		printf("QUITTING......\n");



		return 0; //to end the program

	

	}

	

	

	char play_again;

do{	

	char word_library [23][15]= {

	"red","blue","green","orange","white", 				//Colors

	"lust","envy","wrath","greed","sloth","pride","gluttony",	//7 deadly sins

	"happiness","sadness","fear","disgust","anger",			//Emotions

	"orange","apple","banana",					//Fruits

	"toyota","suzuki","ford"};					//Car Company

	

	int random_index=Randomize();

	int length,i;

	int numcorrect=0;

	int oldcorrect;

	char guessarray[100];

	char guessletter;

	char guess[] = {0,0,0,0,0,0,0,0,0,0,0};

	int repitition=0; //

	int blanks=0; 

	

	

	length=strlen(word_library[random_index]);

	int lives=length/2+1;

	

	

	

	printf("Your Total Lives are \"%d\"\n",lives);

	

	if (random_index>=0 && random_index<=4)

	{

		printf("Hint ...... Its A Color\n");

	}

	

	else if (random_index>=5 && random_index<=11)

	{

		printf("Hint ...... One of the 7 deadly sins\n");

	}

	

	else if (random_index>=12 && random_index<=16)

	{

		printf("Hint ...... Emotions\n");

	}

	

	else if (random_index>=17 && random_index<=19)

	{

		printf("Hint ...... Fruit\n");

	}

	

	else if (random_index>=20 && random_index<=22)

	{

		printf("Hint ...... Car Company\n");

	}

	

	

	printf("\n");

	

	displayhangman(lives);

	printf("\n");

	

	while (numcorrect<length)

	{

		do{

		oldcorrect=numcorrect;

		

		printf("* ");

		for (i=0;i<length;i++)

		{

			if (guess[i]==0)

			{

				printf("_ ");

				blanks++;

			}

			

			else

			{

				printf("%c",word_library[random_index][i]);

			}

		

		}

		printf("   %d blanks left",blanks);

		blanks=0;

		printf("\n\nGuess Letter = ");

		scanf("%s",guessarray);

		guessletter=guessarray[0];

		guessletter=tolower(guessletter);

		

		if (guessletter <'a' || guessletter >'z')

		{

			printf("\nPlz Enter an Alphabet\n\n");

			

			printf("\n");

	

			displayhangman(lives);

			printf("Current Lives %d\n\n",lives);

		

		}

		}while (guessletter<'a' || guessletter>'z');  //end while loop

		repitition=0;

		

		for (i=0;i<length;i++)

		{

			if (guess[i]==1)

			{

				continue;

				

			}

			

			if (word_library[random_index][i]==guessletter)

			{

				guess[i]=1;

				numcorrect++;		

				if (repitition==0)     

				{

					printf("\nCongrats Correct Guess\n\n");

					displayhangman(lives);

					repitition=1;

				}

			}

				

		}

		

		

		if (oldcorrect==numcorrect)

		{

			printf("\nOops Wrong Guess\n\n");

			lives--;

			displayhangman(lives);

		}

		

		

		

		printf("Current Lives %d\n\n",lives);

		

		if (lives==0)

		{

			break;

		

		}

	

	

	} //end of main while loop

	

	if (lives==0)

	{

		printf("\nSorry you ran out of lives\n");

		

	}

		

	else

	{

		printf("Wow!!! You Won the Game\n");	

	}

	

	printf("\n//////Want to play Again?//////\n\nPress Y for Yes or any other charachter for No\n");

	scanf(" %c",&play_again);

	printf("\n");

}while(play_again=='Y' || play_again=='y');	

	return 0;

}



int Randomize ()

{

	srand(time(NULL));

	return rand()%23;

}









void displayhangman(int lives) 

{

    switch (lives) 

    {

        case 7:

            printf("  +---+\n");

            printf("      |\n");

            printf("      |\n");

            printf("      |\n");

            printf("      |\n");

            printf("      |\n");

            break;

        case 6:

            printf("  +---+\n");

            printf("  |   |\n");

            printf("      |\n");

            printf("      |\n");

            printf("      |\n");

            printf("      |\n");

            break;

        case 5:

            printf("  +---+\n");

            printf("  |   |\n");

            printf("  O   |\n");

            printf("      |\n");

            printf("      |\n");

            printf("      |\n");

            break;

        case 4:

            printf("  +---+\n");

            printf("  |   |\n");

            printf("  O   |\n");

            printf("  |   |\n");

            printf("      |\n");

            printf("      |\n");

            break;

        case 3:

            printf("  +---+\n");

            printf("  |   |\n");

            printf("  O   |\n");

            printf(" /|   |\n");

            printf("      |\n");

            printf("      |\n");

            break;

        case 2:

            printf("  +---+\n");

            printf("  |   |\n");

            printf("  O   |\n");

            printf(" /|\\  |\n");

            printf("      |\n");

            printf("      |\n");

            break;

        case 1:

            printf("  +---+\n");

            printf("  |   |\n");

            printf("  O   |\n");

            printf(" /|\\  |\n");

            printf(" /    |\n");

            printf("      |\n");

            break;

            

        case 0:

            printf("  +---+\n");

            printf("  |   |\n");

            printf("  O   |\n");

            printf(" /|\\  |\n");

            printf(" / \\  |\n");

            printf("      |\n");

            break;

        default:

            break;

    }

}





