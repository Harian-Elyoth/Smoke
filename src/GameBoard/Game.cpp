#include "Game.h"

/////////////////////////////
//  Initializes the Board  //
/////////////////////////////

Board gameInit(){
    Board board;

    // Setup both Players
    Player P1((std::string)"Axel", (std::string)"Alucard");
	Player P2((std::string)"Elyoth", (std::string)"Rasputin");
	
    // Set Players to the board
    board.setP1(P1);
	board.setP2(P2);

    // Setup all cards
    board.getAllCards()->add(*(new SteamCat()));
    board.getAllCards()->add(*(new SteamBoiler()));
    board.getAllCards()->add(*(new SteamGear()));

    // Assign a player to the cards (optionnal)
    for(std::vector<Card>::iterator it = board.getAllCards()->begin(); it != board.getAllCards()->end(); it++){
        (*it).setOwner(P1.getId());
    }

    // Setup decks
	board.getP1()->getDeck()->add((*board.getAllCards())[0]);
	board.getP1()->getDeck()->add((*board.getAllCards())[1]);
	board.getP2()->getDeck()->add((*board.getAllCards())[2]);
    

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
    gameEnd(board);
    return;
}

////////////////////////////////
//  Ends and clears the game  //
////////////////////////////////

void gameEnd(Board& board){
    if(board.getP1()->getSmoke() == 0 || board.getP1()->getDeck()->size() == 0){
        std::cout << board.getP2()->getName() << " won!" << std::endl;
    }
    else{
        std::cout << board.getP1()->getName() << " won!" << std::endl;
    }
    return;
}