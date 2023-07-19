#include<stdio.h>
#include<string.h>
int game=1;
int count;

	     void howto()
		{
			int how;
			printf("Which game would you like to know how to play?\n");
			printf("\n 1. Spellathon\n 2. Scramble\n 3. Hangman\n 4. Sudoku\n");
			scanf("%d", &how);
			switch(how)
			{
				case 1: printf("HOW TO PLAY\n\nHow many words of four or more letters can you make from the letters displayed?\nIn making a word, each letter may be used only once. Each word must contain the central letter.\nThere should be at least one seven letter word.\nPlurals, foreign words and proper names are not allowed.\n\n");
						printf("Example:\n");
						printf("\te\n\n");
						printf("s\t\t");
						printf("e\n\n");
						printf("\tV\n\n");
						printf("d\t\t");
						printf("l\n\n");
						printf("\te\n");
						printf("MENU");
						printf("\n 1. Spellathon\n 2. Scramble\n 3. Hangman\n 4. How to play\n 5. Exit\n");
						break;
				case 2: printf("HOW TO PLAY\n\n");
						printf("Rearrange the letters in the four word jumbles, one letter to each square/circle to make four ordinary words.\nNow arrange the letters in the circles to form the answer to the riddle or to fill in the missing word as indicated.\n ");
						printf("MENU");
						printf("\n 1. Spellathon\n 2. Scramble\n 3. Hangman\n 4. How to play\n 5. Exit\n");
						break;
				case 3:	printf("HOW TO PLAY\n\n");
						printf("A movie will be displayed. You can guess the movie by entering one letter at a time.\nIf the letter is present in the word, it will be displayed.\nIf the letter is not in the word, a body part is added to the gallows.\nThe player will continue guessing letters until they can either guess the movie or all the body parts are on the gallows.\n");
						printf("MENU");
						printf("\n 1. Spellathon\n 2. Scramble\n 3. Hangman\n 4. How to play\n 5. Exit\n");
						break;
				case 4: printf("HOW TO PLAY\n\n");
					printf("Fill the grid so that every horizontal row, every vertical column and every 3*3 box contains the digits 1-9, without repeating the numbers in the same row, column or box. You can't change the digits already given in the grid. Every puzzle has one solution.\n");
					printf("MENU");
					printf("\n 1. Spellathon\n 2. Scramble\n 3. Hangman\n 4. How to play\n 5. Exit\n");
					break;
				default: printf("Sorry! No such option! Please enter a valid choice\n");
						printf("MENU");
						printf("\n 1. Spellathon\n 2. Scramble\n 3. Hangman\n 4. How to play\n 5. Exit\n");
						return;
			}
		}
	     void scramble1()
		{
		if(game==1)
		{
			char correctans[20][20]= {"PEEVE", "MINOR", "INSULT", "AFFORD"};
			char jumble[20][20]= {"PVEEE", "MNIOR", "SUNLIT", "AORDFF"};
			scramble(correctans, jumble);
		}
		if(game==2)
		{
			char correctans[20][20]= {"RHINO", "BLEND", "EDGILY", "GRITTY"};
			char jumble[20][20]= {"HNRIO", "BENDL", "EILYDG", "IRTTYG"};
			scramble(correctans, jumble);
		}
		}
	   int  scramble(char correct[20][20], char jumbles[20][20])
		{
			int i, j, k=0, flag, f=0;
			char ans[20], final[20];
			char ans1[20][20];
			char finalans[20][20]= {"fifteen", "older"};
			char finalans1[20][20]= {"dig", "gold"};
			count=0;
			printf("WELCOME TO SCRAMBLE\n");
			printf("HOW TO PLAY\n\nHow many words of four or more letters can you make from the letters displayed?\nIn making a word, each letter may be used only once. Each word must contain the central letter.\nThere should be at least one seven letter word.\nPlurals, foreign words and proper names are not allowed.\n\n");

			for(i=0; i<4; i++)
				printf("%s\n", jumbles[i]);
			printf("Try to solve!\n");
			printf("Type 'stop' to exit the game\n");
			for(;;)
			{
				if(count==4)
					break;
				scanf("%s", ans);
				if(strcmpi(ans, "stop")==0)
					break;
				for(i=0; i<4; i++)
				{
					if(strcmpi(ans, correct[i])==0)
					{
						printf("Awesome!!\n");
						flag=1;
						count++;
						for(j=0;j<4; j++)
						{
							if(strcmpi(ans1[j],ans)==0)
							{
								printf("But you already typed that\n");
								flag=1;
								count--;
								break;
							}
						}
						strcpy(ans1[i], correct[i]);
					}
				}
				if(flag==0)
					printf("Oops! Try Again\n");
				flag=0;
			}
			if(count==4)
			{
				printf("Good job! You have unscrambled all the four words!\n");
				printf("Now, some letters from the words you have unscrambled will be displayed again in a jumbled format\n");
				if(game==1)
				{
					printf("E E N T F I F\n R E L O D\n");
					printf("Try to unscramble the word(s) that will fit the following quote:\n");
					printf("'To me, old age is always _______ years _____ than I am.'- Thomas Bailer Aldrich (7,.,5)\n ");
					printf("Enter your answers:\n");
					while(f!=2)
					{
						scanf("%s", final);
						for(k=0; k<2; k++)
						{
							if(strcmpi(final, finalans[k])==0)
							f++;
						}
						k++;
					}
				if(f==2)
				{
					printf("'To me, old age is always fifteen years older than I am.'- Thomas Bailer Aldrich\n");
					printf("CONGRATULATIONS YOU GOT IT RIGHT!\n");
				}
				}
				if(game==2)
				{
					printf("G I D\n D L O G\n");
					printf("Try to unscramble the word(s) that will fit the following quote:\n");
					printf("'______ where the ______ is unless you just need some exercise.'- John M. Capozzi(3,.,4)\n");
					printf("Enter your answers:\n");
					while(f!=2)
					{
						scanf("%s", final);
						for(k=0; k<2; k++)
						{
							if(strcmpi(final, finalans1[k])==0)
							f++;
						}
						k++;
					}
					if(f==2)
					{
						printf("'Dig where the gold is unless you just need some exercise.'- John M. Capozzi\n");
						printf("CONGRATULATIONS YOU GOT IT RIGHT!\n");
					}
				}
			printf("GAME OVER.\n");
			}
			return 0;
		}
	      void spellathon()
		{
			char correctans1[80][80]={"ache", "arch", "char", "cholera", "chorale", "chore", "each", "echo", "hale", "halo", "hare", "heal", "hear", "hero", "hole", "leach", "loch", "ochre", "reach", "rhea", "roach"};
			char ans[10];
			char ans1[80][80];
			int flag;
			int count=0;
			int i=0,j=0;
			printf("WELCOME TO SPELLATHON\n");
			printf("HOW TO PLAY\n\nHow many words of four or more letters can you make from the letters displayed?\nIn making a word, each letter may be used only once. Each word must contain the central letter.\nThere should be at least one seven letter word.\nPlurals, foreign words and proper names are not allowed.\n\n");
			printf("\to\n\n");
			printf("r\t\t");
			printf("e\n\n");
			printf("\tH\n\n");
			printf("l\t\t");
			printf("a\n\n");
			printf("\tc\n");
			printf("Outstanding= 15, Good= 10, Average= 5\n");
			printf("Type stop to exit the game\n");
			printf("Enter your answers\n");
			for(;;)
			{
				if(count==21)
					break;
				scanf("%s", ans);
				if(strcmpi(ans, "stop")==0)
					break;
				for(i=0; i<21; i++)
				{
					if(strcmpi(ans, correctans1[i])==0)
					{
						printf("Awesome!!\n");
						flag=1;
						count++;
						for(j=0;j<21; j++)
						{
							if(strcmpi(ans1[j],ans)==0)
							{
								printf("But you already typed that\n");
								flag=1;
								count--;
								break;
							}
						}		
						strcpy(ans1[i], correctans1[i]);
					}
				}
				if(flag==0)
					printf("Try again!\n");
					flag=0;
			}
				printf("Correct answers: %d\n",count);
				if(count>10&&count<=15)
					printf("OUTSTANDING!!\n");
				else if(count>5&&count<=10)
					printf("Good!\n");
				else if(count>0&&count<=5)
					printf("Average\n");
				printf("GAME OVER.\n");
		}
	       void hangman()
					{
					
						int hang=0;
						int flag=0;
						int i,j, k, c=0;
						char a[20], answers[20][20];
						char ans[10][10]={"t", "h", "e"," ", "r", "i", "n", "g"};
						char pat[10][10]={"*", "*", "e", " ", "*", "i", "*", "*"};
						count=0;
						printf("WELCOME TO HANGMAN\n");
						printf("HOW TO PLAY\n\n");
						printf("A movie will be displayed. You can guess the movie by entering one letter at a time.\nIf the letter is present in the word, it will be displayed.\nIf the letter is not in the word, a body part is added to the gallows.\nThe player will continue guessing letters until they can either guess the movie or all the body parts are on the gallows.\n");
						printf("Movie:\n");
						for(j=0; j<9; j++)
							printf("%s",pat[j]);
						printf("\n");
						j=0;
						printf("Guess the letters\n");
						printf("Type stop to exit the game\n");
						for(;;)
						{
							if(count==5)
							{
									printf("Awesome! You guessed the movie!\n");
									printf("GAME OVER.\n");
									break;
							}
							printf("\n");
							strcpy(answers[c], a);
							c++;
							scanf("%s", a);
							if(strcmpi(a, "stop")==0)
								break;
							for(i=0; i<8; i++)
							{
								if(strcmpi(a, ans[i])==0)
								{
									printf("Awesome!!\n");
									strcpy(pat[i], a);
									for(j=0; j<9; j++)
										printf("%s",pat[j]);
									printf("\n");
									flag=1;
									count++;
									if((strcmpi(a, "a")==0)|| (strcmpi(a, "e")==0)||(strcmpi(a, "i")==0)||(strcmpi(a, "o")==0)||(strcmpi(a,"u")==0))
										{					
										count--;
										break;
										}
										for(k=0; k<20; k++)
											{
												if(strcmpi(answers[k], a)==0)
												{
													printf("You already typed that!\n");
													flag=1;
													count--;
													break;
												}
											}
								}
							}
							if(flag==0)
							{
								hang++;
								switch(hang)
					
					
								{		
									case 1: printf("_____________\n");
					   						printf("|      |     \n");
					   						printf("|     _|_    \n");
					   				 		printf("|    |> <|   \n");
					   						printf("|    |___|   \n");
					   						printf("|            \n");
					   						printf("|	         \n");
					   						printf("|	         \n");
					   						printf("|	         \n");
					  			 			printf("|	         \n");
											for(j=0; j<9; j++)
											printf("%s",pat[j]);
											printf("\n");
											break;
									case 2: printf("_____________\n");
					   						printf("|      |     \n");
											printf("|     _|_    \n");
											printf("|    |> <|   \n");
											printf("|    |___|   \n");
											printf("|      |     \n");
											printf("|      |     \n");
											printf("|	         \n");
											printf("|	         \n");
											printf("|	         \n");
											for(j=0; j<9; j++)
											printf("%s",pat[j]);
											printf("\n");
											break;
									case 3: printf("_____________\n");
											printf("|      |     \n");
											printf("|     _|_    \n");
											printf("|    |> <|   \n");
											printf("|    |___|   \n");
											printf("|      |     \n");
											printf("|    --|     \n");
											printf("|	         \n");
											printf("|	         \n");
											printf("|	         \n");
											for(j=0; j<9; j++)
											printf("%s",pat[j]);
											printf("\n");
											break;
									case 4: printf("_____________\n");
											printf("|      |     \n");
											printf("|     _|_    \n");
											printf("|    |> <|   \n");
											printf("|    |___|   \n");
											printf("|      |     \n");
											printf("|    --|--   \n");
											printf("|	         \n");
											printf("|	         \n");
											printf("|	         \n");
											for(j=0; j<9; j++)
											printf("%s",pat[j]);
											printf("\n");
											break;
									case 5: printf("_____________\n");
											printf("|      |     \n");
											printf("|     _|_    \n");
											printf("|    |> <|   \n");
											printf("|    |___|   \n");
											printf("|      |     \n");
											printf("|    --|--   \n");
											printf("|      |     \n");
											printf("|     /      \n");
											printf("|    /       \n");
											for(j=0; j<9; j++)
											printf("%s",pat[j]);
											printf("\n");
											break;
									case 6: printf("_____________\n");
											printf("|      |     \n");
											printf("|     _|_    \n");
											printf("|    |X X|   \n");
											printf("|    |___|   \n");
											printf("|      |     \n");
											printf("|    --|--   \n");
											printf("|      |     \n");
											printf("|     / \\    \n");
											printf("|    /   \\   \n");
											for(j=0; j<9; j++)
											printf("%s",pat[j]);
											printf("\n");
											break;
								}
								if(hang==6)
								{
									printf("GAME OVER. :'('");
									return;
								}
							}
							flag=0;
						}
					}
void hangman1()
{

	int count=0, hang=0;
	int flag=0;
	int i,j, k, c=0;
	char a[20], answers[20][20];
	char ans[30][30]={"c", "h", "e","n", "n", "a", "i", " ", "e", "x", "p", "r", "e", "s", "s"};
	char pat[30][30]={"*", "*", "e", "*", "*", "a", "i", " ", "e", "*", "*", "*", "e", "*", "*"};
	printf("WELCOME TO HANGMAN\n");
	printf("Movie:\n");
	for(j=0; j<15; j++)
		printf("%s",pat[j]);
	printf("\n");
	j=0;
	printf("Guess the letters\n");
	printf("Type stop to exit the game\n");
	for(;;)
	{
		if(count==9)
		{
				printf("Awesome! You guessed the movie!\n");
				printf("GAME OVER.\n");
				break;
		}
		printf("\n");
		strcpy(answers[c], a);
		c++;
		scanf("%s", a);
		if(strcmpi(a, "stop")==0)
			break;
		for(i=0; i<15; i++)
		{
			if(strcmpi(a, ans[i])==0)
			{
				printf("Awesome!!\n");
				strcpy(pat[i], a);
				for(j=0; j<15; j++)
				printf("%s",pat[j]);
				printf("\n");
				flag=1;
				count++;
				if((strcmpi(a, "a")==0)|| (strcmpi(a, "e")==0)||(strcmpi(a, "i")==0)||(strcmpi(a, "o")==0)||(strcmpi(a,"u")==0))
					{					
					count--;
					break;
					}
					for(k=0; k<20; k++)
						{
							if(strcmpi(answers[k], a)==0)
							{
								printf("You already typed that!\n");
								flag=1;
								count--;
								break;
							}
						}
			}
		}
		if(flag==0)
		{
			hang++;
			switch(hang)
			{		
				case 1: printf("_____________\n");
   						printf("|      |     \n");
   						printf("|     _|_    \n");
   				 		printf("|    |> <|   \n");
   						printf("|    |___|   \n");
   						printf("|            \n");
   						printf("|	         \n");
   						printf("|	         \n");
   						printf("|	         \n");
  			 			printf("|	         \n");
						for(j=0; j<15; j++)
						printf("%s",pat[j]);
						printf("\n");
						break;
				case 2: printf("_____________\n");
   						printf("|      |     \n");
   						printf("|     _|_    \n");
   				 		printf("|    |> <|   \n");
   						printf("|    |___|   \n");
   						printf("|      |     \n");
   						printf("|      |     \n");
   						printf("|	         \n");
   						printf("|	         \n");
  			 			printf("|	         \n");
						for(j=0; j<15; j++)
						printf("%s",pat[j]);
						printf("\n");
						break;
				case 3: printf("_____________\n");
   						printf("|      |     \n");
   						printf("|     _|_    \n");

   				 		printf("|    |> <|   \n");
   						printf("|    |___|   \n");
   						printf("|      |     \n");
   						printf("|    --|     \n");
   						printf("|	         \n");
   						printf("|	         \n");
  			 			printf("|	         \n");
						for(j=0; j<15; j++)
						printf("%s",pat[j]);
						printf("\n");
						break;
				case 4: printf("_____________\n");
   						printf("|      |     \n");
   						printf("|     _|_    \n");
   				 		printf("|    |> <|   \n");
   						printf("|    |___|   \n");
   						printf("|      |     \n");
   						printf("|    --|--   \n");
   						printf("|	         \n");
   						printf("|	         \n");
  			 			printf("|	         \n");
						for(j=0; j<15; j++)
						printf("%s",pat[j]);
						printf("\n");
						break;
				case 5: printf("_____________\n");
   						printf("|      |     \n");
   						printf("|     _|_    \n");
   				 		printf("|    |> <|   \n");
   						printf("|    |___|   \n");
   						printf("|      |     \n");
   						printf("|    --|--   \n");
   						printf("|      |     \n");
   						printf("|     /      \n");
  			 			printf("|    /       \n");
						for(j=0; j<15; j++)
						printf("%s",pat[j]);
						printf("\n");
						break;
				case 6: printf("_____________\n");
   						printf("|      |     \n");
   						printf("|     _|_    \n");
   				 		printf("|    |X X|   \n");
   						printf("|    |___|   \n");
   						printf("|      |     \n");
   						printf("|    --|--   \n");
   						printf("|      |     \n");
   						printf("|     / \\    \n");
  			 			printf("|    /   \\   \n");
						for(j=0; j<15; j++)
						printf("%s",pat[j]);
						printf("\n");
						break;
			}
			if(hang==6)
			{
				printf("Sorry! You lose! The movie was 'Chennai Express'\n");
				printf("GAME OVER. \n");
				return;

			}
		}
		flag=0;
	}
	}
	      void spellathon1()
		{
		char correctans1[80][80]= {"bile","lire","rile","isle","belt","lite","tile","tels","lest","slit","silt","list","slier","blest","stile","islet","blister","bristle"};
			char ans[10];
			char ans1[80][80];
			int flag;
			int count=0;
			int i=0,j=0;
			printf("WELCOME TO SPELLATHON\n");
			printf("\tt\n\n");
			printf("s\t\t");
			printf("b\n\n");
			printf("\tL\n\n");
			printf("r\t\t");
			printf("e\n\n");
			printf("\ti\n");
			printf("Outstanding= 15, Good= 10, Average= 5\n");
			printf("Type stop to exit the game\n");
			printf("Enter your answers\n");
			for(;;)
			{
			if(count==18)
			break;
			scanf("%s", ans);
			if(strcmpi(ans, "stop")==0)
			break;
			for(i=0; i<18; i++)
			{
			if(strcmpi(ans, correctans1[i])==0)
			{
			printf("Awesome!!\n");
			flag=1;
			count++;
			for(j=0;j<18; j++)
			{
			if(strcmpi(ans1[j],ans)==0)
			{
			printf("But you already typed that\n");
			flag=1;
			count--;
			break;
			}
			}
			strcpy(ans1[i], correctans1[i]);
			}
			}
				if(flag==0)
				printf("Try again!\n");
				flag=0;
			}
				printf("Correct answers: %d\n",count);
				if(count>10&&count<=15)
					printf("OUTSTANDING!!\n");
				else if(count>5&&count<=10)
					printf("Good!\n");
				else if(count>0&&count<=5)
					printf("Average\n");
				printf("GAME OVER.\n");
		}

int main(void)
{
	int choice;
	int opt;
	printf("******WELCOME TO THE ALPHAUNO CODE******\n");
	printf("\n 1. Spellathon\n 2. Scramble\n 3. Hangman\n 4. How to Play\n 5. Exit");
	for(;;)
	{	
		printf("\n");
		printf("Enter your choice!\n");
		scanf("%d", &choice);
		switch(choice)
		{
		 	case 1: spellathon();
					printf("Enter 1 if you want to play again. Otherwise, enter 0.\n");
					scanf("%d", &opt);
					if(opt==1)
					spellathon1();
				    printf("\n 1. Spellathon\n 2. Scramble\n 3. Hangman\n 4. How to Play\n 5. Exit");
					break;
	    	        case 2: 	scramble1();
				        printf("Enter 1 if you want to play again. Otherwise, enter 0.\n");
					scanf("%d", &opt);
					if(opt==1)
						{
						game++;
						scramble1();
						game--;
						}
		    			printf("\n 1. Spellathon\n 2. Scramble\n 3. Hangman\n 4. How to Play\n 5. Exit");
		    			break;
		       case 3:	hangman();
					printf("Enter 1 if you want to play again. Otherwise, enter 0.\n");
					scanf("%d", &opt);
					if(opt==1)
						hangman1();
						printf("\n 1. Spellathon\n 2. Scramble\n 3. Hangman\n 4. How to Play\n 5. Exit");
		    			break;
		       case 4:  howto();
		       			break;
		       case 5: 	printf("GOODBYE. WE HOPE YOU HAD FUN PLAYING\n");
				        return;		
		       default:	printf("Sorry! No such option! Please enter a valid choice\n");
		    			printf("\n 1. Spellathon\n 2. Scramble\n 3. Hangman\n 4. How to Play\n 5. Exit");
		    			break;
		}
	}
}
