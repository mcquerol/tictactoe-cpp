/***************************************************************************
*============= Copyright by Darmstadt University of Applied Sciences =======
****************************************************************************
* Filename        : CHUMAN.H
* Author          :
* Description     :
*
*
****************************************************************************/

#ifndef CHUMAN_H
#define CHUMAN_H
#include "CPlayer.h"
class CHuman : public CPlayer {
public:

    /** CHuman constructor
     *
     * inherited from the CPlayer class
     * Constructor defines the inherited attribute stone as the input parameter stone
     */
    CHuman(char stone);

    /** CHuman::placeStone
     *
     * inherited virtual method
     * take inputs x and y and sets the board at that position to char stone
     */
    void placeStone(unsigned int x, unsigned int y);
};
/********************
**  CLASS END
*********************/
#endif /* CHUMAN_H */

//TODO 1st make sure the game works
