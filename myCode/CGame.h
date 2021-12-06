
#ifndef CGAME_H
#define CGAME_H

#include "CBoard.h"
#include "CPlayer.h"
#include "CHuman.h"
#include "CAI.h"
#include "CScreen.h"
#include "CGraphicalScreen.h"
class CGame {
public:

	/** CGame::menu()
	 *
	 * this is displayed in the console at the beginning of the game
	 * and it allows to choose the user which players play the game
	 * it then sets the players array depending on the choice
	 */
	void menu();

	/** CGame::play()
	 *
	 * this method contains the user input and the logic
	 * for a single round of tic tac toe. The pNum int varies between 0 and 1 so it alternates
	 * between players[0] and players[1] and it doesn't matter who the players are (Human or AI)
	 */
    void play(int pNum);

    /** CPlayer array of 2 elements
     *
     * This consists of human or AI players depending on
     * who the user decides should play the game
     */
    CPlayer* players[2];

    /** CBoard pointer
     *
     * creates a pointer to the board for the CPlayer class
     * to be able to have access to the 2d board
     */
    CBoard* board;

    /** CScreen pointer
     *
     * creates a pointer to the screen
     * to be able to print the board
     */
    CScreen* screen;

    /** CGraphicalScreen pointer
     *
     * creates a pointer to a gui class
     * the CGraphicalScreen class is not currently used
     * but can be implemented in the future
     */
    CGraphicalScreen* gui;
};

#endif /* CGAME_H */
