#include "CAI.h"

/** CAI constructor
 *
 * inherited from the CPlayer class
 * Constructor defines the inherited attribute stone as the input parameter stone
 */
CAI::CAI(char stone) : CPlayer(stone)
{
	this->stone = stone;
}

/** CAI destructor
 *
 * EMPTY
 */
CAI::~CAI()
{

}

/** CAI::minimax
 *
 * minimax algorithm uses recursion to scan all the possible moves and make
 * the best moves given the previous move by another player
 */
//int minimax(char board[3][3], int depth, bool isMax)
//{
//    int score = this.isWinner(this->stone);
//
//    // If Maximizer has won the game return his/her
//    // evaluated score
//    if (score == 10)
//        return score;
//
//    // If Minimizer has won the game return his/her
//    // evaluated score
//    if (score == -10)
//        return score;
//
//
//    // If this maximizer's move
//    if (isMax)
//    {
//        int best = -1000;
//
//        // Traverse all cells
//        for (int i = 0; i<3; i++)
//        {
//            for (int j = 0; j<3; j++)
//            {
//                // Check if cell is empty
//                if (board[i][j]=='_')
//                {
//                    // Make the move
//                    board[i][j] = player;
//
//                    // Call minimax recursively and choose
//                    // the maximum value
//                    best = max( best,
//                        minimax(board, depth+1, !isMax) );
//
//                    // Undo the move
//                    board[i][j] = '_';
//                }
//            }
//        }
//        return best;
//    }
//
//    // If this minimizer's move
//    else
//    {
//        int best = 1000;
//
//        // Traverse all cells
//        for (int i = 0; i<3; i++)
//        {
//            for (int j = 0; j<3; j++)
//            {
//                // Check if cell is empty
//                if (board[i][j]==' ')
//                {
//                    // Make the move
//                    board[i][j] = this->stone;
//
//                    // Call minimax recursively and choose
//                    // the minimum value
//                    best = min(best,
//                           minimax(board, depth+1, !isMax));
//
//                    // Undo the move
//                    board[i][j] = ' ';
//                }
//            }
//        }
//        return best;
//    }
//}

/** CAI::placeStone
 *
 * inherited virtual method
 * take inputs x and y but defaults to 0 as
 * the AI does not require user input
 * if the AI is the first to place then it places a stone in a random position
 */
void CAI::placeStone(unsigned int x, unsigned int y)
{

	for(int r = 0; r < 3; r++)
	{
		for(int c = 0; c < 3; c++)
		{
			if(this->b->board[x][y] == ' ')
			{
				continue;
			}
		}
	}
	//not working :(
	//minimax(char board[][], int depth, bool isMax);
}

