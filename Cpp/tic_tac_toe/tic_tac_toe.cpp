//play a game of tic tac toe

#include<iostream>
#include<stdlib.h> //includes rand
#include "tic_tac_toe_header.h" //used to call functions

using namespace std;

int main()
{
    cout << "Would you like to play tic tac toe?\n";
    cout << "1. Sure!\n";
    cout << "2. No thanks.\n";

    int response;
    cout << "Your response: ";
    cin >> response;
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(999,'\n');
        cout << "Please enter 1 or 2: ";
        cin >> response;
    }

    //create empty array representing the moves players make
    int player_moves[9] = {};

    // initialize random seed
    srand (time(NULL));

    // randomize if player or computer goes first
    int turn = rand() % 2; // range 0 to 1

    switch(response)
    {
    case 1:
        show_board(player_moves);
        if (turn % 2 == 0)
        {
            cout << "Computer goes first.\n";
        }
        else
        {
            cout << "Player goes first.\n";
        }
        play_ttt(player_moves, turn);
        break;
    default:
        cout << "Maybe some other time.";
        break;
    }

    return 0;
}
