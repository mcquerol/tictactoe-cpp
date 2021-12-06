
#ifndef CAI_H
#define CAI_H

#include "CPlayer.h"

class CAI : public CPlayer {
public:

	/** CAI::minimax
	 *
	 * minimax algorithm uses recursion to scan all the possible moves and make
	 * the best moves given the previous move by another player
	 */
	int minimax(char board[3][3], int depth, bool isMax);

    /** CAI::placeStone
     *
     * inherited virtual method
     * take inputs x and y but defaults to 0 as
     * the AI does not require user input
     * if the AI is the first to place then it places a stone in a random position
     */
    void placeStone(unsigned int x, unsigned int y);

    /** CAI constructor
     *
     * inherited from the CPlayer class
     * Constructor defines the inherited attribute stone as the input parameter stone
     */
    CAI(char stone);

    /** CAI destructor
     *
     * EMPTY
     */
    ~CAI();
};


#endif /* CAI_H */
