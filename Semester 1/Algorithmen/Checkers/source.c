#include <stdio.h>
#include <stdlib.h>

void fieldshow(int field[8][8])
{
	int xcord, ycord;
	system("clear");
	printf("    A B C D E F G H\n");
	printf("   +-+-+-+-+-+-+-+-+\n");
	for(ycord=0;ycord<8;ycord++)
	{
		printf(" %d ", ycord+1);
		for(xcord=0;xcord<8;xcord++)
		{
			switch(field[ycord][xcord])
			{
				case 1: printf("|x"); break;
				case 0: printf("| "); break;
				case 2: printf("|o"); break;
				case 3: printf("|X"); break;
				case 4: printf("|O"); break;
			}
		}
		printf("|\n   +-+-+-+-+-+-+-+-+\n");
	}
}

int chartoi(char xcord)
{
	switch(xcord)
        {
		case 'A': return 0; break;
                case 'B': return 1; break;
                case 'C': return 2; break;
                case 'D': return 3; break;
                case 'E': return 4; break;
                case 'F': return 5; break;
                case 'G': return 6; break;
                case 'H': return 7; break;
	}
}

int randjump(int min, int max)
{
	return (rand()%(max-min)+min);
}

int validmove(int field[8][8], int ycord, int xcord, int tycord, int txcord, int ki)
{
	int piece=field[ycord][xcord], mxcord, mycord;
	if (absval(tycord-ycord) != absval(txcord-xcord))
	{
		if (ki == 0)
		{
			printf("Du kannst dich nur diagonal bewegen.\n");
		}
		return 0;
	}
	else if (xcord == 0 && txcord<0)
	{
		if (ki == 0)
		{
			printf("Ausserhalb des Spielfelds.\n");
		}
		return 0;
	}
	else if ((absval(tycord-ycord)<1) || (absval(txcord-xcord)<1))
	{
		if (ki == 0)
		{
			printf("Du musst dich um mindestens 1 Feld bewegen.\n");
		}
		return 0;
	}
	else if ((absval(tycord-ycord)>2) || (absval(txcord-xcord)>2))
	{
		if (piece == 1 || piece == 2)
		{
			if (ki == 0)
			{
				printf("Du kannst dich maximal um 2 Felder bewegen.\n");
			}
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if ((piece == 1) && (tycord-ycord<0) || (piece==2) && (tycord-ycord>0))
	{
		if (ki == 0)
		{
			printf("Du kannst diesen Stein nicht in die gewaehlte Richtung bewegen.\n");
		}
		return 0;
	}
	else if (absval(tycord-ycord) == 2)
	{
		mycord = (ycord+tycord)/2;
		mxcord = (xcord+txcord)/2;
		if (piece == 1 || piece == 3)
		{
			if (field[mycord][mxcord] != 2 && field[mycord][mxcord] != 4)
			{
				if (ki == 0)
				{
					printf("Du kannst diesen Stein nicht schlagen.\n");
				}
				return 0;
			}
		}
		if (piece == 2 || piece == 4)
		{
			if (field[mycord][mxcord] != 1 && field[mycord][mxcord] != 3)
			{
				if (ki == 0)
				{
					printf("Du kannst diesen Stein nicht schlagen.\n");
				}
				return 0;
			}
		}
	}
	else if (field[tycord][txcord] == piece || field[tycord][txcord] == piece+2)
	{
		if (ki == 0)
		{
			printf("Dort ist bereits ein Stein von dir.\n");
		}
		return 0;
	}
	else
	{
		return 1;
	}
}

int absval(int i)
{
	if (i<0)
		return -i;
	else
		return i;
}

int allowedpiece(int piece, int player)
{
	if (piece == player || piece == player + 2)
		return 1;
	else
		return 0;
}

void checkpiece(int field[8][8], int player, int playercount)
{
	int xcord, ycord, mxcord, mycord, txcord, tycord, piece, kipiece;
	int firstcheck = 0;
	int checked = 0;
	char temp[2];
	if (playercount == 2 || player == 1)
	{
		while(!checked)
		{
			printf("Eingabe der Stein-Koordinaten (A1-H8): ");
			scanf("%s", temp);
			xcord = chartoi(toupper(temp[0]));
			ycord = temp[1] - '0' - 1;
			if (field[ycord][xcord] == 0)
				printf("Kein Stein auf diesen Koordinaten vorhanden.\n");
			else if (!allowedpiece(field[ycord][xcord], player))
				printf("Dieser Stein gehoert zu einem anderen Spieler.\n");
			else
				firstcheck = 1;
			printf("Wohin soll der Stein bewegt werden (A1-H8): ");
			scanf("%s", temp);
			txcord = chartoi(toupper(temp[0]));
			tycord = temp[1] - '0' - 1;
			if (field[tycord][txcord] != 0)
			{
				printf("Du kannst dich nur auf ein freies Feld bewegen.\n");
			}
			else if (!validmove(field, ycord, xcord, tycord, txcord, 0))
			{
			}
			else
			{
				if(firstcheck)
				{
					checked = 1;
				}
			}
		}
	}
	if (playercount == 1 && player == 2)
	{
		ycord = 0;
		xcord = 0;
		tycord = 0;
		txcord = 0;
		checked = 0;
		printf("Berechne Computerzug...\n");
		while(!checked)
		{

			do
			{
				ycord = randjump(0,7);
				xcord = randjump(0,7);
				tycord = ycord-1;
				txcord = xcord+rand()%1-1;
				if (!validmove(field, ycord, xcord, tycord, txcord, 1))
				{
					checked = 0;
				}
				else
				{
					checked = 1;
				}
			}
			while(field[tycord][txcord] != 0);
		}
	}
	piece = field[ycord][xcord];
	field[ycord][xcord] = 0;
	field[tycord][txcord] = piece;

	if (absval(tycord-ycord) == 2)
	{
		mycord = (ycord+tycord)/2;
		mxcord = (xcord+txcord)/2;
		field[mycord][mxcord] = 0;
	}
	if (player == 1 && tycord == 7)
		field[tycord][txcord] = 3;
	if (player == 2 && tycord == 0)
		field[tycord][txcord] = 4;
}

int checkwin(int field[8][8], int player)
{
	int y, x;
	int count = 0;
	for (y = 0; y<8; y++) {
		for (x = 0; x<8; x++)
		{
			if (field[y][x] == player)
				count++;
		}
	}
	return count;
}

int gamemenu(void)
{
	int menuplayer=0;
	do
	{
		printf("Willkommen beim Dame-Spiel\n");
		printf("Bitte waehlen Sie:\n");
		printf("(1) Allein gegen den Computer spielen\n");
		printf("(2) Gegen einen Freund spielen\n");
		scanf("%d", &menuplayer);
	}
	while(menuplayer < 1 && menuplayer > 3);
	return menuplayer;
}

int main(void)
{
	int playercount = 0;
	int player = 1;
	int finished = 0;
	int field[8][8] = {
		{0,1,0,1,0,1,0,1},
		{1,0,1,0,1,0,1,0},
		{0,1,0,1,0,1,0,1},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{2,0,2,0,2,0,2,0},
		{0,2,0,2,0,2,0,2},
		{2,0,2,0,2,0,2,0}};
	playercount = gamemenu();

	while (!finished)
	{
		fieldshow(field);
		if (player == 1)
		{
			printf("Spieler X ist dran.\n");
		}
		if (player == 2)
		{
			printf("Spieler O ist dran.\n");
		}
		checkpiece(field, player, playercount);
		if (player == 1)
		{
			player = 2;
		}
		else if (player == 2)
		{
			player = 1;
		}
		if ((checkwin(field, 1)+checkwin(field, 3)) == 0)
		{
			printf("Spieler O gewinnt!\n");
			finished = 1;
		}
		if ((checkwin(field, 2)+checkwin(field, 4)) == 0)
		{
			printf("Spieler X gewinnt!\n");
			finished = 1;
		}
	}
	return 0;
}
