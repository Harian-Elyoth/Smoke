#include "Game.h"

/////////////////////////////
//  Initializes the Board  //
/////////////////////////////

Board gameInit(){
    Board board;
    return board;
}

/////////////////////////////////
//  Sequences the games steps  //
/////////////////////////////////

void gameStart(){
    Board board = gameInit();
    while(board.getTurn() < MAX_TURNS){
        board.BeginPhase();
        if(board.verifGameEnd()) break;
        board.MainPhase();
        if(board.verifGameEnd()) break;
        board.CombatPhase();
        if(board.verifGameEnd()) break;
        board.EndPhase();
        if(board.verifGameEnd()) break;
    }
    gameEnd();
    return;
}

////////////////////////////////
//  Ends and clears the game  //
////////////////////////////////

void gameEnd(){
    return;
}