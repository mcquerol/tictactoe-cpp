#include "CBoard.h"
#include <iostream>

using namespace std;

/**
 * CBoard constructor
 *
 * sets the static 2d char array to empty
 */
CBoard::CBoard()
{
	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			this->board[row][col] = ' ';
		}
	}
}

/** CBoard destructor
 *
 * EMPTY
 */
CBoard::~CBoard()
{

}
