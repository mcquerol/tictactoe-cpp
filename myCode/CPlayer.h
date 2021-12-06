/***************************************************************************
*============= Copyright by Darmstadt University of Applied Sciences =======
****************************************************************************
* Filename        : CPLAYER.H
* Author          :
* Description     :
*
*
****************************************************************************/

#ifndef CPLAYER_H
#define CPLAYER_H

#include "CBoard.h"
class CPlayer {
public:
	/** CBoard pointer b
	 * this pointer allows the inherited classes to access the board pointer
	 */
	CBoard* b;

	/**
	 *
	 */
	char stone;

	/** CPlayer::isValid
	 *
	 * bool method which goes through the board and checks if the rows,
	 * cols and diagonals match the input char stone
	 */
	bool isValid(unsigned int x, unsigned int y);

    /** CPlayer::isWinner
     *
     * bool method which goes through the board and checks if the rows,
     * cols and diagonals match the input char stone
     */
	bool isWinner(char stone);

	/** CPlayer::placeStone
	 *
	 * pure virtual function required for polymorphism because CHuman and CAI classes
	 * share the placeStone classes
	 */
    virtual void placeStone(unsigned int x, unsigned int y) = 0;

    /** CPlayer constructor
     *
     * base class for inheritance
     * takes char stone as input parameter
     */
    CPlayer(char stone);

    /** CPlayer destructor
     *
     * EMPTY virtual destructor
     */
    virtual ~CPlayer();
};
/********************
**  CLASS END
*********************/
#endif /* CPLAYER_H */
