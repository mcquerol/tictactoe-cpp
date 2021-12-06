#include "CHuman.h"

/** CHuman constructor
 *
 * inherited from the CPlayer class
 * Constructor defines the inherited attribute stone as the input parameter stone
 */
CHuman::CHuman(char stone) : CPlayer(stone)
{
	this->stone = stone;
}

/** CHuman::placeStone
 *
 * inherited virtual method
 * take inputs x and y and sets the board at that position to char stone
 */
void CHuman::placeStone(unsigned int x, unsigned int y)
{
	this->b->board[x][y] = this->stone;
}
