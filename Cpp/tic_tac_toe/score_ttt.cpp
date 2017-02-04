//function called by tic_tac_toe.cpp to perform scoring

#include<iostream>
#include "tic_tac_toe_header.h"

using namespace std;

void score_ttt(int moves[], int& turn)
{
    int winner = 0;

    // Determine if there are any more moves available
    winner = 9;
    for(int i=0; i<9; i++)
    {
        if(moves[i] == 0)
        {
            winner = 0;
            break;
        }
    }

    // check to see if the player or computer has won
    // ROWS
    for(int i=0; i<9; i = i+3)
    {
        if(moves[i] == moves[i+1]  && moves[i] == moves[i+2] && moves[i+1] == moves[i+2])
        {
            if(moves[i] == 1) winner = 1;
            else if(moves[i] == -1) winner = -1;
        }
    }
    // COLUMNS
    for(int i=0; i<4; i++)
    {
        if(moves[i] == moves[i+3]  && moves[i] == moves[i+6] && moves[i+3] == moves[i+6])
        {
            if(moves[i] == 1) winner = 1;
            else if(moves[i] == -1) winner = -1;
        }
    }
    // DIAGANOL #1
    if(moves[0] == moves[4]  && moves[0] == moves[8] && moves[4] == moves[8])
    {
        if(moves[4] == 1) winner = 1;
        else if(moves[4] == -1) winner = -1;
    }
    // DIAGANOL #2
    if(moves[2] == moves[4]  && moves[2] == moves[6] && moves[4] == moves[6])
    {
        if(moves[4] == 1) winner = 1;
        else if(moves[4] == -1) winner = -1;
    }

    // End the game if there is a winner or a draw
    if(winner == 1)
    {
        cout << "You won, good job!\n";
    }
    else if(winner == -1)
    {
        cout << "Computer wins!\n";
    }
    else if(winner == 9)
    {
        cout << "The game has ended in a draw.\n";
    }
    else
    {
        turn++;
        play_ttt(moves, turn);
    }
}
