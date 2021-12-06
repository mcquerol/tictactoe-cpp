#include "CPlayer.h"
#include "CBoard.h"

/** CPlayer::isValid
 *
 * bool method which goes through the board and checks if the rows,
 * cols and diagonals match the input char stone
 */
bool CPlayer::isValid(unsigned int x, unsigned int y)
{
		//out of bounds
		if(x > 3 || x < 1 || y > 3 || y < 1)
		{
			return false;
		}
		//board space occupied
		if(this->b->board[x-1][y-1] != ' ')
		{
			return false;
		}
		return true;
}

/** CPlayer::isWinner
 *
 * bool method which goes through the board and checks if the rows,
 * cols and diagonals match the input char stone
 */
bool CPlayer::isWinner(char stone)
{
	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			//empty space
			if(this->b->board[row][col] == ' ')
			{
				continue;
			}
			//columns
			if (this->b->board[row][col] == this->stone && this->b->board[row+1][col] == this->stone && this->b->board[row-1][col] == this->stone)
			{
				return true;
			}
			//rows
			else if (this->b->board[row][col] == this->stone && this->b->board[row][col+1] == this->stone && this->b->board[row][col-1] == this->stone)
			{
				return true;
			}
			//diagonal(top left to bottom right)
			else if (this->b->board[row][col] == this->stone && this->b->board[row+1][col+1] == this->stone && this->b->board[row+2][col+2] == this->stone)
			{
				return true;
			}
			//diagonal(bottom left to top right)
			else if (this->b->board[row][col+2] == this->stone && this->b->board[row+1][col+1] == this->stone && this->b->board[row+2][col] == this->stone)
			{
				return true;
			}
		}
	}
	return false;
}

/** CPlayer constructor
 *
 * base class for inheritance
 * takes char stone as input parameter
 */
CPlayer::CPlayer(char stone)
{
	b = new CBoard();
	this->stone = stone;
}

/** CPlayer destructor
 *
 * EMPTY destructor
 */
CPlayer::~CPlayer()
{

}
