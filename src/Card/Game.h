#ifndef GAME_H
#define GAME_H
#pragma once

#include "../../GameBoard/Board.h"

#define MAX_TURNS 100

Board gameInit();

void gameStart();

void gameEnd();

#endif
