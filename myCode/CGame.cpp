#include "CGame.h"
#include "CScreen.h"
#include "CPlayer.h"
#include "CBoard.h"
#include "CHuman.h"
#include "CAI.h"
#include "CGraphicalScreen.h"

#include <iostream>

using namespace std;

/** CGame::play()
 *
 * this method contains the user input and the logic
 * for a single round of tic tac toe. The pNum int varies between 0 and 1 so it alternates
 * between players[0] and players[1] and it doesn't matter who the players are (Human or AI)
 */
void CGame::play(int pNum)
{
	unsigned int x;
	unsigned int y;

	do
	{
		cout << "Enter x and y coordinates: " << endl;
		cin >> x;
		cin >> y;
		if (x < 1 || x > 3 || y < 1 || y > 3)
		{
			cerr << "INVALID INPUT" << endl;
			continue;
		}
		if(players[pNum]->isValid(x,y))
		{
			players[pNum]->placeStone(x-1,y-1);
		}
		else
		{
			cout << "MOVE NOT VALID" << endl;
			continue;
		}

	}while(x < 1 || x > 3 || y < 1 || y > 3);

	cout << players[pNum]->stone << endl;//debug
	board = players[pNum]->b;
	screen->printBoard(board);

	if(players[pNum]->isWinner(players[pNum]->stone))
	{
		cout<<"Player " << pNum << " is the winner";
	}
	//make sure the right board is being printed..empty board atm is being printed
}

/** CGame::menu()
 *
 * this is displayed in the console at the beginning of the game
 * and it allows to choose the user which players play the game
 * it then sets the players array depending on the choice
 */
void CGame::menu()
{
	board = new CBoard();
	int choice;

	cout << "WELCOME TO TIC TAC TOE" << endl;
	cout << "-----------------------" << endl;
	cout << "Choose your players: " << endl;
	cout << "1. Human vs Human " << endl;
	cout << "2. Human vs Computer " << endl;
	cout << "3. Computer vs Human " << endl;
	cout << "4. Computer vs Computer " << endl;

	cin >> choice;
	switch(choice)
	{
	case 1:
		players[0] = new CHuman('X');
		players[1] = new CHuman('O');
		break;

	case 2:
		players[0] = new CHuman('X');
		players[1] = new CAI('O');
		break;

	case 3:
		players[0] = new CAI('X');
		players[1] = new CHuman('O');
		break;

	case 4:
		players[0] = new CAI('X');
		players[1] = new CAI('O');
		break;
	}
}
