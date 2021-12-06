#include "CGame.h"

#include <iostream>
using namespace std;

/** main superloop
 *
 * the main function contains the game progression loop
 * a CGame object is first created and a loop for 9 rounds is created
 * for each iteration, the round is printed and the player's turn
 * the player's turn is determined by int pNum which is either a 0 or 1, this number gets passed
 * as the CPlayer array in the CGame class which contains human or AI players
 */
int main (void)
{
	CGame game;
	game.menu();
	int pNum = 0;
	for(int round = 0; round < 9; round++)
	{
		cout << "Round " << round + 1 << ", Player " << pNum + 1 <<"'s turn" << endl;
		game.play(pNum);
		pNum = !pNum;
	}
	cout << "TIE GAME!" << endl;
	return 0;
}
