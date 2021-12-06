#include "CScreen.h"
#include <iostream>
using namespace std;

/** CScreen constructor
 *
 * EMPTY constructor
 */
CScreen::CScreen()
{

}

/** CScreen destructor
 *
 * EMPTY destructor
 */
CScreen::~CScreen()
{

}

/** CScreen::printBoard()
 *
 * print the board by const pointer
 */
void CScreen::printBoard(CBoard const *const boardptr)
{
    cout<<"     |     |     " << endl;
    cout<<"  "<<boardptr->board[0][0]<<"  |  "<<boardptr->board[0][1]<<"  |  "<<boardptr->board[0][2]<< endl;
    cout<<"_____|_____|_____" << endl;
    cout<<"     |     |     " << endl;
    cout<<"  "<<boardptr->board[1][0]<<"  |  "<<boardptr->board[1][1]<<"  |  "<<boardptr->board[1][2]<< endl;
    cout<<"_____|_____|_____" << endl;
    cout<<"     |     |     " << endl;
    cout<<"     |     |     " << endl;
    cout<<"  "<<boardptr->board[2][0]<<"  |  "<<boardptr->board[2][1]<<"  |  "<<boardptr->board[2][2]<< endl;
}
