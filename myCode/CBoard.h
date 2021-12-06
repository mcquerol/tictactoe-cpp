/***************************************************************************
*============= Copyright by Darmstadt University of Applied Sciences =======
****************************************************************************
* Filename        : CBOARD.H
* Author          :
* Description     :
*
*
****************************************************************************/

#ifndef CBOARD_H
#define CBOARD_H

class CBoard {
public:
	/** CBoard constructor
	 *
	 * sets the 2d unsigned char array to empty
	 */
    CBoard();

    /** CBoard destructor
     *
     * sets the 2d unsigned char array to empty
     */
    ~CBoard();

    /** unsigned char board
     *
     * array of size 3x3
     */
    unsigned char board[3][3];
};
/********************
**  CLASS END
*********************/
#endif /* CBOARD_H */
