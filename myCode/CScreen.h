
#ifndef CSCREEN_H
#define CSCREEN_H

#include "CBoard.h"

class CScreen {

public:

	/** CScreen constructor
	 *
	 * EMPTY constructor
	 */
	CScreen();

	/** CScreen destructor
	 *
	 * EMPTY destructor
	 */
	~CScreen();

	/** CScreen::printBoard()
	 *
	 * print the board by const pointer
	 */
    void printBoard(CBoard const *const boardptr);
};
/********************
**  CLASS END
*********************/
#endif /* CSCREEN_H */
