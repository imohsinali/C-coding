#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
int n_players,_1st=0,_2nd=0,_3rd=0,_4th=0,position=0,seat=0,f,d1,d2;
char n;

int Rolling();
int Dice();	
int main()


{                               printf("\t\t\t\t\tWellcome to Snake Ladder Game\n\n");
      printf("|36   35   34   33   32    31   |                                 Snake 12 to 2        ladder 3 to 16\n");
      printf("|25   26   27   28   29    30   |                                 Snake 14 to 11       ladder 5 to  7\n");
      printf("|24   23   22   21   20    19   |                                 Snake 17 to 4        ladder 15 to 25\n");
      printf("|13   14   15   16   17    18   |                                 Snake 31 to 19       ladder 18 to 20\n");
      printf("|12   11   10   9    8     7    |                                 Snake 35 to 22       ladder 21 to 32\n");
      printf("|1    2    3    4    5     6    |                                The player who reach 36 first will be wiiner\n");

	

printf("\t\t\t\tPress  Enter to roll the dice\n");
printf("Maximum plyaer should not exceed 4\t\t\tEnter the The number of players you want:");
scanf("%d",&n_players);
//Selection of players
	while ("game")
	{

	f=(seat%n_players)+1; 
	printf("Player %d turn\n",f);

	
    Rolling();
    Dice();

	if (f==1) 
	position=_1st;
	if (f==2) 
	position=_2nd;
	if (f==3)
    position=_3rd;
    if (f==4)
    position=_4th;
	if (position+d1 > 36)
	printf("The Value exceeds 36 so the player will not move\n");
	else if (position+d1 <= 36)
	{
	position=position+d1; //increment of player position 

	//for Ladders
	if( position == 3)
	{
		printf("Horray! Up the ladder!\n");
		position=position+13;
	}
	if( position == 5)
	{
		printf("Horray! Up the ladder!\n");
		position=position+2;
	}
	if( position == 15)
	{
		printf("Horray! Up the ladder!\n");
		position=position+10;
	}
	if( position == 18)
	{
		printf("Horray! Up the ladder!\n");
		position=position+2;
	}
	if( position == 21)
	{
		printf("Horray! Up the ladder!\n");
		position=position+11;
	}
     // for snakes
	if( position == 12)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-10;
	}
	if( position == 17)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-13;
	}
	if( position == 14)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-3;
	}
	if( position == 31)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-12;
	}
	if( position == 35)
	{
		printf("Ouch! Bitten by a snake!\n");
		position=position-13;
	}


   //position of players
	}
		if (f==1)
	{
	_1st=position; 
	printf("Player 1 landed on  %d\n",_1st);
	}
	if (f==2)
	{
	_2nd=position; 
	printf("Player 2 landed on %d\n",_2nd);
	}
			if (f==3)
	{
	_3rd=position; 
	printf("Player 3 landed on  %d\n",_3rd);
	}
	if (f==4)
	{
	_4th=position; 
	printf("Player 4 landed on %d\n",_4th);
	}
	
// Win the player who reach 36 first

	if (_1st==36)
	{
	printf("Player 1 wins the game\n"); 
	break;
	}
	if (_2nd==36)
	{
	printf("Player 2 wins the game\n");
	break;
	}
		if (_3rd==36)
	{
	printf("Player 3 wins the game\n");
	break;
	}
		if (_4th==36)
	{
	printf("Player 4 wins the game\n");
	break;
}
	seat++;
	}


	printf("Game Over... Congrulations\n"); 


return 0;

}
// custum function for rolling the dice
int Rolling()
{
	scanf("%c",&n);
	if (n==10) 
	{
    srand(time(0));
	d1=(rand()%6)+1;
	}
	printf("The dice tuned to be : %d\n",d1); 
}

// custum funtion for 6 on dice
int Dice()
{
	
		while("game") 
	{
	if (d1!=6 && d2!=6)
	break;
	while(1) 
	{
	scanf("%c",&n); 
	if (n==10)
	{
	d2=(rand()%6)+1;
	break;
	}
	} 
	printf("The dice tuned to be:%d\n",d2);
	d1=d1+d2;
	} 
}



	




