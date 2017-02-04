//function called by tic_tac_toe.cpp to perform player moves

#include<iostream>
#include<stdlib.h> //includes rand
#include "tic_tac_toe_header.h"

using namespace std;

void play_ttt(int moves[], int turn)
{
    int selection = -1;
    if (turn % 2 == 0)
    {
        do
        {
            // computer makes a random move
            selection = rand() % 9; // range 0 to 9
        }
        while(moves[selection] != 0); //prevents overwriting

        cout << "The computer played in position " << selection+1 << endl;
        moves[selection] = -1;
    }
    else
    {
        cout << "Please select a valid move: ";
        cin >> selection;
        while(moves[selection-1] != 0 || selection > 9 || selection < 1)
        {
            cout << "Your move is invalid. Please select a valid move: ";
            cin >> selection;
        }

        moves[selection-1] = 1;
    }
    show_board(moves);
    score_ttt(moves, turn);
}
