//function called by tic_tac_toe.cpp to show the board

#include<iostream>
#include "tic_tac_toe_header.h"

using namespace std;

void show_board(int moves[])
{
    cout << "Here is the board:\n";
    for(int i = 0; i < 9; i++)
    {
        if (moves[i] == 0)
        {
            cout << "\t" << i+1;
        }
        else if (moves[i] == 1) // human player represented by X
        {
            cout << "\t" << "x";
        }
        else if (moves[i] == -1) // computer represented by O
        {
            cout << "\t" << "o";
        }
        if ((i+1) % 3 == 0)
        {
            cout << '\n';
        }
    }
    cout << '\n';
}
