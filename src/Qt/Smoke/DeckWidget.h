#ifndef DECKWIDGET_H
#define DECKWIDGET_H

#include <QLabel>
#include "../../GameBoard/CardList.h"

class DeckWidget : public QLabel
{
    Q_OBJECT

    public:
        DeckWidget(QWidget* parent = nullptr);
        ~DeckWidget(){ }
        void setPlayer(CardList* cL);
        int DeckSize();

    private:
        CardList* cL;
};

#endif // DECKWIDGET_H
