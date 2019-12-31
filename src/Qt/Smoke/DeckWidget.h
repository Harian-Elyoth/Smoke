#ifndef DECKWIDGET_H
#define DECKWIDGET_H

#include <QLabel>
#include <QToolTip>
#include <QPoint>
#include <QString>
#include <string>

#include "../../GameBoard/CardList.h"

class DeckWidget : public QLabel
{
    Q_OBJECT

    public:
        DeckWidget(QWidget* parent = nullptr);
        ~DeckWidget(){ }
        void setDeck(CardList* cL);
        QString DeckSize();

    private:
        CardList* cL;

    public slots:
        void hoveredSlot(){
            QToolTip::showText(this->mapToGlobal(QPoint()), QString::fromStdString(std::to_string(cL->size())));
        }
};

#endif // DECKWIDGET_H
