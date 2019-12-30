
#ifndef SMOKE_H
#define SMOKE_H
#pragma once

#include <iostream>
#include <string>
#include <vector>

#include <QApplication>
#include <QPushButton>
#include <QDesktopWidget>
#include <QFormLayout>
#include <QListWidget>

#include "Card.h"
#include "CardList.h"
#include "Player.h"
#include "Board.h"
#include "Game.h"
#include "smokewindow.h"

#include "CardWidget.h"
#include "DeckWidget.h"

void initMainWindow(SmokeWindow* w);

void addCard(SmokeWindow* w, QWidget* hand, CardWidget* card);

void playerHand(SmokeWindow* w, QWidget* handP1, QWidget* handP2);

void initChooseClanWindow(Player* P);

void initChooseDeck(Player *P);

#endif // SMOKE_H
